#include "std.h"
#include "ddutil.h"
#include "asmcoder.h"
#include "gxcanvas.h"
#include "gxruntime.h"

extern gxRuntime* gx_runtime;

static AsmCoder asm_coder;

static void calcShifts(unsigned mask, unsigned char* shr, unsigned char* shl) {
	if(mask) {
		for(*shl = 0; !(mask & 1); ++ * shl, mask >>= 1) {}
		for(*shr = 8; mask & 1; -- * shr, mask >>= 1) {}
	}
	else *shr = *shl = 0;
}

PixelFormat::~PixelFormat() {
	if(plot_code) {
		VirtualFree(plot_code, 0, MEM_RELEASE);
	}
}

void PixelFormat::setFormat(const int& pf) {

}

static void adjustTexSize(int* width, int* height, int* dir3dDev) {

}

static int* createSurface(int width, int height, int pitch, void* bits, int* dirDraw) {
	
	return 0;
}

static void buildMask(int* surf) {
	
}

static void buildAlpha(int* surf, bool whiten) {

}

void ddUtil::buildMipMaps(int* surf) {

}

void ddUtil::copy(int* dest, int dx, int dy, int dw, int dh, int* src, int sx, int sy, int sw, int sh) {

}

int* ddUtil::createSurface(int w, int h, int flags, gxGraphics* gfx) {

	return 0;
}

//Tom Speed's DXTC loader
//
int* loadDXTC(const char* filename, gxGraphics* gfx) {
	
	return 0;
}

int* ddUtil::loadSurface(const std::string& f, int flags, gxGraphics* gfx) {

	return 0;
}