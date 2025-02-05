#include "std.h"
#include "gxgraphics.h"
#include "gxruntime.h"
#include "../gxruntime/gxutf8.h"

extern gxRuntime* gx_runtime;
static Debugger* debugger;

gxGraphics::gxGraphics(gxRuntime* rt, int* dd, int* fs, int* bs, bool d3d){
	
}

gxGraphics::~gxGraphics() {
	
}

void gxGraphics::setGamma(int r, int g, int b, float dr, float dg, float db) {
	
}

void gxGraphics::updateGamma(bool calibrate) {
	
}

void gxGraphics::getGamma(int r, int g, int b, float* dr, float* dg, float* db) {
	
}

bool gxGraphics::restore() {

	return true;
}

gxCanvas* gxGraphics::getFrontCanvas()const {
	return 0;
}

gxCanvas* gxGraphics::getBackCanvas()const {
	return 0;
}

gxFont* gxGraphics::getDefaultFont()const {
	return 0;
}

void gxGraphics::vwait() {
	
}

void gxGraphics::flip(bool v) {
	
}

void gxGraphics::copy(gxCanvas* dest, int dx, int dy, int dw, int dh, gxCanvas* src, int sx, int sy, int sw, int sh) {
	
}

int gxGraphics::getScanLine()const {
	
	return 0;
}

int gxGraphics::getTotalVidmem()const {
	return 0;
}

int gxGraphics::getAvailVidmem()const {
	
	return 0;
}

gxMovie* gxGraphics::openMovie(const std::string& file, int flags) {

	return 0;
}

gxMovie* gxGraphics::verifyMovie(gxMovie* m) {
	return 0;
}

void gxGraphics::closeMovie(gxMovie* m) {
	
}

gxCanvas* gxGraphics::createCanvas(int w, int h, int flags) {
	
	return 0;
}

gxCanvas* gxGraphics::loadCanvas(const std::string& f, int flags) {
	
	return 0;
}

gxCanvas* gxGraphics::verifyCanvas(gxCanvas* c) {
	return  0;
}

void gxGraphics::freeCanvas(gxCanvas* c) {
	
}

int gxGraphics::getWidth()const {
	return 0;
}

int gxGraphics::getHeight()const {
	return 0;
}

int gxGraphics::getDepth()const {
	return 0;
}

gxFont* gxGraphics::loadFont(std::string f, int height, bool bold, bool italic, bool underlined) {
	
	return 0;
}

gxFont* gxGraphics::verifyFont(gxFont* f) {
	return 0;
}

void gxGraphics::freeFont(gxFont* f) {
	
}

//////////////
// 3D STUFF //
//////////////

gxScene* gxGraphics::createScene(int flags) {
	
	return 0;
}

gxScene* gxGraphics::verifyScene(gxScene* s) {
	return 0;
}

void gxGraphics::freeScene(gxScene* scene) {
	
}

gxMesh* gxGraphics::createMesh(int max_verts, int max_tris, int flags) {

	return 0;
}

gxMesh* gxGraphics::verifyMesh(gxMesh* m) {
	return 0;
}

void gxGraphics::freeMesh(gxMesh* mesh) {
	
}