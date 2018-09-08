#include "my_subset.h"

class VectorGenerator
{
public:
	VectorGenerator();
	~VectorGenerator();

	virtual BaseVector Generate(int size, Base max_value) = 0;
};


class VectorGenerator1: VectorGenerator
{
public:
	BaseVector Generate(int size, Base max_value);
};


class VectorGenerator2 : VectorGenerator
{
public:
	BaseVector Generate(int size, Base max_value);
};