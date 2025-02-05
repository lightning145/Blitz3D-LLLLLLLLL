#ifndef MESHUTIL_H
#define MESHUTIL_H

#include "meshmodel.h"

struct MeshUtil {

	static MeshModel* createCube(const Brush& b);
	static MeshModel* createSphere(const Brush& b, int segs);
	static MeshModel* createCylinder(const Brush& b, int segs, bool solid);
	static MeshModel* createCone(const Brush& b, int segs, bool solid);

	static void lightMesh(MeshModel* m, const Vector& pos,
		const Vector& rgb, float range);
};

#endif