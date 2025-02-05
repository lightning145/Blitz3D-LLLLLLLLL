#include "std.h"
#include "gxcanvas.h"
#include "gxgraphics.h"
#include "gxruntime.h"
#include "asmcoder.h"
#include "gxutf8.h"

static int canvas_cnt;

extern gxRuntime* gx_runtime;

static unsigned FWMS[] = {
	0xffffffff,0x7fffffff,0x3fffffff,0x1fffffff,
	0x0fffffff,0x07ffffff,0x03ffffff,0x01ffffff,
	0x00ffffff,0x007fffff,0x003fffff,0x001fffff,
	0x000fffff,0x0007ffff,0x0003ffff,0x0001ffff,
	0x0000ffff,0x00007fff,0x00003fff,0x00001fff,
	0x00000fff,0x000007ff,0x000003ff,0x000001ff,
	0x000000ff,0x0000007f,0x0000003f,0x0000001f,
	0x0000000f,0x00000007,0x00000003,0x00000001 };
static unsigned LWMS[] = {
	0x80000000,0xc0000000,0xe0000000,0xf0000000,
	0xf8000000,0xfc000000,0xfe000000,0xff000000,
	0xff800000,0xffc00000,0xffe00000,0xfff00000,
	0xfff80000,0xfffc0000,0xfffe0000,0xffff0000,
	0xffff8000,0xffffc000,0xffffe000,0xfffff000,
	0xfffff800,0xfffffc00,0xfffffe00,0xffffff00,
	0xffffff80,0xffffffc0,0xffffffe0,0xfffffff0,
	0xfffffff8,0xfffffffc,0xfffffffe,0xffffffff };

static void calcShifts(unsigned mask, unsigned char* shr, unsigned char* shl) {
	
}

struct Rect : public RECT {
	Rect() {
	}
	Rect(int x, int y, int w, int h) {
		left = x; top = y; right = x + w; bottom = y + h;
	}
};

static bool clip(const RECT& viewport, RECT* d) {

	return true;
}

static bool clip(const RECT& viewport, RECT* d, RECT* s) {
	
	return true;
}

gxCanvas::gxCanvas(gxGraphics* g, int* s, int f)
{
	
}

gxCanvas::~gxCanvas() {
	
}

void gxCanvas::backup()const {
	
}

void gxCanvas::restore()const {
	
}

int* gxCanvas::getSurface()const {
	return 0;
}

int* gxCanvas::getTexSurface()const {
	return 0;
}

bool gxCanvas::clip(RECT* d)const {
	return true;
}

bool gxCanvas::clip(RECT* d, RECT* s)const {
	return true;
}

void gxCanvas::updateBitMask(const RECT& r)const {

}

void gxCanvas::setModify(int n) {
	
}

int gxCanvas::getModify()const {
	return 0;
}

bool gxCanvas::attachZBuffer() {
	
	return true;
}

void gxCanvas::releaseZBuffer() {
	
}

void gxCanvas::damage(const RECT& r)const {
	
}

void gxCanvas::setFont(gxFont* f) {
	
}

void gxCanvas::setMask(unsigned argb) {
	
}

void gxCanvas::setColor(unsigned argb) {
	
}

void gxCanvas::setClsColor(unsigned argb) {
	
}

void gxCanvas::setOrigin(int x, int y) {
	
}

void gxCanvas::setHandle(int x, int y) {
	
}

void gxCanvas::setViewport(int x, int y, int w, int h) {
	
}

//renderering primitives
void gxCanvas::cls() {
	
}

void gxCanvas::plot(int x, int y) {
	
}

void gxCanvas::line(int x0, int y0, int x1, int y1) {
	
}

void gxCanvas::rect(int x, int y, int w, int h, bool solid) {
	
}

void gxCanvas::oval(int x1, int y1, int w, int h, bool solid) {
	
}

void gxCanvas::blit(int x, int y, gxCanvas* src, int src_x, int src_y, int src_w, int src_h, bool solid) {
	
}

void gxCanvas::blitstretch(int x, int y, int w, int h, gxCanvas* src, int src_x, int src_y, int src_w, int src_h, bool solid) {
	
}

void gxCanvas::text(int x, int y, const std::string& t) {

}

int gxCanvas::getWidth()const {
	return 0;
}

int gxCanvas::getHeight()const {
	return 0;
}

int gxCanvas::getDepth()const {
	return 0;
}

void gxCanvas::getOrigin(int* x, int* y)const {
	
}

void gxCanvas::getHandle(int* x, int* y)const {
	
}

void gxCanvas::getViewport(int* x, int* y, int* w, int* h)const {
	
}

unsigned gxCanvas::getMask()const {
	return 0;
}

unsigned gxCanvas::getColor()const {
	return 0;
}

unsigned gxCanvas::getClsColor()const {
	return 0;
}

bool gxCanvas::collide(int x1, int y1, const gxCanvas* i2, int x2, int y2, bool solid)const {

	return true;
}

bool gxCanvas::rect_collide(int x1, int y1, int x2, int y2, int w2, int h2, bool solid)const {
	return true;
}

bool gxCanvas::lock()const {
	
	return true;
}

void gxCanvas::unlock()const {
	
}

void gxCanvas::setPixel(int x, int y, unsigned argb) {
	
}

unsigned gxCanvas::getPixel(int x, int y)const {

	return 0;
}

void gxCanvas::copyPixelFast(int x, int y, gxCanvas* src, int src_x, int src_y) {
	
}

void gxCanvas::copyPixel(int x, int y, gxCanvas* src, int src_x, int src_y) {
	
}

void gxCanvas::setCubeMode(int mode) {
	
}

void gxCanvas::setCubeFace(int face) {
}