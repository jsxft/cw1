#include "my_subset.h"



int MySubset::set_size()
{
	return set->size();
}

void MySubset::add_element(int index)
{
	if (!subset[index])
	{
		subset[index] = true;
		size++;
		sum += (*set)[index];
	}
}

void MySubset::delete_element(int index)
{
	if (subset[index])
	{
		subset[index] = false;
		size--;
		sum -= (*set)[index];
	}
}

bool MySubset::contains(int index)
{
	return subset[index];
}

int MySubset::get_count()
{
	return size;
}

Base MySubset::get_sum()
{
	return sum;
}

MySubset::MySubset(const BaseVector * base_vector_):
	set(base_vector_),
	set_size(set->size()),
	subset(set_size, false),
	size(0),
	sum(0)
{
}

MySubset::MySubset(const MySubset & subset_):
	set(subset_.set),
	set_size(subset_.set_size),
	subset(subset_.subset),
	size(subset_.size),
	sum(subset_.sum)
{
}


MySubset::~MySubset()
{
}
