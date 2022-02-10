#include <vector>

template<class dataType=int>
class MinHeapVector
{
public:

private:
	std::vector<dataType> data;
	size_t size;
	size_t capacity;
};