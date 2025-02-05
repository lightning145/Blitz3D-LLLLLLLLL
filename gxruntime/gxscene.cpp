#include "std.h"
#include "gxscene.h"
#include "gxgraphics.h"
#include "gxruntime.h"

static bool can_wb;
static int  hw_tex_stages, tex_stages;
static float BLACK[] = { 0,0,0 };
static float WHITE[] = { 1,1,1 };
static float GRAY[] = { .5f,.5f,.5f };

void gxScene::setRS(int n, int t) {
	
}

void gxScene::setTSS(int n, int s, int t) {
	
}

gxScene::gxScene(gxGraphics* g, gxCanvas* t){

}

gxScene::~gxScene() {

}

void gxScene::setTexState(int n, const TexState& state, bool tex_blend) {

}

int  gxScene::hwTexUnits() {
	return 0;
}

int  gxScene::gfxDriverCaps3D() {
	return 0;
}

void gxScene::setZMode() {
	
}

void gxScene::setLights() {
	
}

void gxScene::setAmbient() {
	
}

void gxScene::setFogMode() {
	
}

void gxScene::setTriCull() {
	
}

void gxScene::setHWMultiTex(bool e) {
	
}

void gxScene::setWBuffer(bool n) {
	
}

void gxScene::setDither(bool n) {
	
}

void gxScene::setAntialias(bool n) {
	
}

void gxScene::setWireframe(bool n) {
	
}

void gxScene::setFlippedTris(bool n) {
	
}

void gxScene::setAmbient(const float rgb[]) {
	
}

void gxScene::setAmbient2(const float rgb[]) {
	
}

void gxScene::setViewport(int x, int y, int w, int h) {
	
}

void gxScene::setOrthoProj(float nr, float fr, float w, float h) {
	
}

void gxScene::setPerspProj(float nr, float fr, float w, float h) {
	
}

void gxScene::setFogColor(const float rgb[3]) {
	
}

void gxScene::setFogRange(float nr, float fr) {
	
}

void gxScene::setFogDensity(float den) {
	
}

void gxScene::setFogMode(int n) {
	
}

void gxScene::setZMode(int n) {
	
}

void gxScene::setViewMatrix(const Matrix* m) {
	
}

void gxScene::setWorldMatrix(const Matrix* m) {
	
}

void gxScene::setRenderState(const RenderState& rs) {
	
}

bool gxScene::begin(const std::vector<gxLight*>& lights) {

	
	return true;
}

void gxScene::clear(const float rgb[3], float alpha, float z, bool clear_argb, bool clear_z) {
	
}

void gxScene::render(gxMesh* m, int first_vert, int vert_cnt, int first_tri, int tri_cnt) {

}

void gxScene::end() {
	
}

gxLight* gxScene::createLight(int flags) {
	
	return 0;
}

void gxScene::freeLight(gxLight* l) {
	
}

int gxScene::getTrianglesDrawn()const {
	return 0;
}