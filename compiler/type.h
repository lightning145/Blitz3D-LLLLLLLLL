#ifndef TYPE_H
#define TYPE_H

#include "decl.h"

struct FuncType;
struct ArrayType;
struct StructType;
struct ConstType;
struct VectorType;

struct Type {
	virtual ~Type() {}

	virtual bool intType() { return 0; }
	virtual bool floatType() { return 0; }
	virtual bool stringType() { return 0; }

	virtual std::string name() { return "N/A"; }

	//casts to inherited types
	virtual FuncType* funcType() { return 0; }
	virtual ArrayType* arrayType() { return 0; }
	virtual StructType* structType() { return 0; }
	virtual ConstType* constType() { return 0; }
	virtual VectorType* vectorType() { return 0; }

	//operators
	virtual bool canCastTo(Type* t) { return this == t; }

	//built in types
	static Type* void_type, * int_type, * float_type, * string_type, * null_type;
};

struct FuncType : public Type {
	Type* returnType;
	DeclSeq* params;
	bool userlib, cfunc;
	FuncType(Type* t, DeclSeq* p, bool ulib, bool cfn) :returnType(t), params(p), userlib(ulib), cfunc(cfn) {}
	~FuncType() { delete params; }
	FuncType* funcType() { return this; }
	std::string name() { return returnType->name() + " function"; }
};

struct ArrayType : public Type {
	Type* elementType; int dims;
	ArrayType(Type* t, int n) :elementType(t), dims(n) {}
	ArrayType* arrayType() { return this; }
	std::string name() { return elementType->name() + " array"; }
};

struct StructType : public Type {
	std::string ident;
	DeclSeq* fields;
	StructType(const std::string& i) :ident(i), fields(0) {}
	StructType(const std::string& i, DeclSeq* f) :ident(i), fields(f) {}
	~StructType() { delete fields; }
	StructType* structType() { return this; }
	virtual bool canCastTo(Type* t);
	std::string name() { return "Custom type \"" + ident + "\""; }
};

struct ConstType : public Type {
	Type* valueType;
	int intValue;
	float floatValue;
	std::string stringValue;
	ConstType(int n) :intValue(n), valueType(Type::int_type) {}
	ConstType(float n) :floatValue(n), valueType(Type::float_type) {}
	ConstType(const std::string& n) :stringValue(n), valueType(Type::string_type) {}
	ConstType() :valueType(Type::null_type) {}
	ConstType* constType() { return this; }
	std::string name() { return valueType->name() + " constant"; }
};

struct VectorType : public Type {
	std::string label;
	Type* elementType;
	std::vector<int> sizes;
	VectorType(const std::string& l, Type* t, const std::vector<int>& szs) :label(l), elementType(t), sizes(szs) {}
	VectorType* vectorType() { return this; }
	virtual bool canCastTo(Type* t);
	std::string name() { return elementType->name() + " vector"; }
};

#endif