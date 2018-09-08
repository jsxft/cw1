#include "vector_generator.h"



VectorGenerator::VectorGenerator()
{
}


VectorGenerator::~VectorGenerator()
{
}

BaseVector VectorGenerator1::Generate(int size, Base max_value)
{
	BaseVector result(size);

	for (int i = 0; i < size; ++i)
		result[i] = rand() % max_value + 1;

	return result;
}

BaseVector VectorGenerator2::Generate(int size, Base max_value)
{
	BaseVector result(size);

	for (int i = 0; i < size / 4; ++i)
		result[i] = rand() % max_value + 1;

	for (int i = size / 4; i < size / 2; ++i)
		result[i] = rand() % (max_value / 2) + 1;

	for (int i = size / 2; i < size * 3 / 4; ++i)
		result[i] = rand() % (max_value / 3) + 1;

	for (int i = size * 3 / 4; i < size; ++i)
		result[i] = rand() % (max_value / 4) + 1;

	return BaseVector();
}
