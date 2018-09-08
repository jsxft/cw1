#include <vector>

typedef long long int Base;
typedef std::vector<Base> BaseVector;
typedef std::vector<bool> SubsetBase;

class MySubset
{
	const BaseVector* set;
	const int set_size;
	SubsetBase subset;
	int size;
	Base sum;
	
public:
	MySubset(const BaseVector * base_vector_);
	MySubset(const MySubset &subset_);
	~MySubset();

	void add_element(int index);
	void delete_element(int index);

	bool contains(int index);

	int get_count();
	Base get_sum();
};

