#include <d3dx9.h>

extern IDirect3DDevice9* device;
extern int window_width, window_height;

struct Vertex
{
	Vertex() {}
	Vertex(
		float x, float y, float z,
		float nx, float ny, float nz,
		float u, float v)
	{
		_x = x;  _y = y;  _z = z;
		_nx = nx; _ny = ny; _nz = nz;
		_u = u;  _v = v;
	}
	float _x, _y, _z;
	float _nx, _ny, _nz;
	float _u, _v; // texture coordinates

	static const DWORD FVF;
};
const DWORD Vertex::FVF = D3DFVF_XYZ | D3DFVF_NORMAL | D3DFVF_TEX1;

class Cube
{
public:
	Cube();
	~Cube();
	void Draw(float x, float y);

private:
	IDirect3DVertexBuffer9* VB = 0;
};

Cube::Cube()
{
	device->CreateVertexBuffer(
		6 * sizeof(Vertex),
		D3DUSAGE_WRITEONLY,
		Vertex::FVF,
		D3DPOOL_MANAGED,
		&VB,
		0);

	Vertex* v;
	VB->Lock(0, 0, (void**)&v, 0);

	// quad built from two triangles, note texture coordinates:
	v[0] = Vertex(-1.0f, -1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 1.0f);
	v[1] = Vertex(-1.0f, 1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f);
	v[2] = Vertex(1.0f, 1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 1.0f, 0.0f);

	v[3] = Vertex(-1.0f, -1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 1.0f);
	v[4] = Vertex(1.0f, 1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 1.0f, 0.0f);
	v[5] = Vertex(1.0f, -1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 1.0f, 1.0f);

	VB->Unlock();

	D3DXVECTOR3 position(0.0f, 0.0f, -5.0f);
	D3DXVECTOR3 target(0.0f, 0.0f, 0.0f);
	D3DXVECTOR3 up(0.0f, 1.0f, 0.0f);
	D3DXMATRIX V;
	D3DXMatrixLookAtLH(&V, &position, &target, &up);

	device->SetTransform(D3DTS_VIEW, &V);

	//
	// Set the projection matrix.
	//

	D3DXMATRIX proj;
	D3DXMatrixPerspectiveFovLH(
		&proj,
		D3DX_PI * 0.5f, // 90 - degree
		(float)window_width / (float)window_height,
		1.0f,
		1000.0f);
	device->SetTransform(D3DTS_PROJECTION, &proj);

}

Cube::~Cube()
{
	VB->Release();
}

void Cube::Draw(float x,float y)
{
	D3DXMATRIX Model;
	D3DXMATRIX trns;
	D3DXMatrixTranslation(&trns,x,y,0.0f);

	Model = trns;
	device->SetTransform(D3DTS_WORLD,&Model);

	device->SetStreamSource(0, VB, 0, sizeof(Vertex));
	device->SetFVF(Vertex::FVF);
	device->DrawPrimitive(D3DPT_TRIANGLELIST, 0, 2);
}

void gxCreateCube(float x,float y)
{
	Cube c = Cube();
	c.Draw(x,y);
}