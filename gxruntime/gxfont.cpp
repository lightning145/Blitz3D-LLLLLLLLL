#include "std.h"
#include "gxfont.h"

#include "gxcanvas.h"
#include "gxgraphics.h"
#include "gxutf8.h"
#include "../bbruntime/bbsys.h"

#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <freetype/ftsynth.h>

gxFont::gxFont(FT_Library ftLibrary, gxGraphics* gfx, const std::string& fn, int h, bool bold, bool italic, bool underlined) {
	
}

gxFont::~gxFont() {
	
}

const int transparentPixel = 0x4A412A;
const int opaquePixel = 0xffffff;

void gxFont::renderAtlas(int chr) {
	
}

void gxFont::render(gxCanvas* dest, unsigned color_argb, int x, int y, const std::string& text) {
	
}

int gxFont::charWidth(int chr) {
	
	return 0;
}

int gxFont::charAdvance(int chr) {
	
	return 0;
}

int gxFont::stringWidth(const std::string& text) {
	
	return 0;
}

int gxFont::getWidth()const {
	return maxWidth;
}

int gxFont::getHeight()const {
	return 0;
}

int gxFont::getRenderOffset()const {
	return 0;
}

int gxFont::getWidth(const std::string& text) {
	return stringWidth(text);
}

bool gxFont::isPrintable(int chr)const {
	return true;
}

float gxFont::getBaselinePosition() const
{
	return 0.0f;
}

float gxFont::getUnderlinePosition()const
{
	return 0.0f;
}

float gxFont::getUnderlineThickness()const
{
	return 0.0f;
}