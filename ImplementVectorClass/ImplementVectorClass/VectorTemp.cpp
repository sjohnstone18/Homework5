#include "VectorTemp.h"


template<typename t>
Vector::Vector() {
	int myarray[] = { 0,1,2,3,4,5,6,7,8,9 };
}
template<typename t>
Vector::Vector(int const size) {
	arraySize = size;
	ArrayLength = size;
	int *NewArray = new t(size);

}

template<typename t>
Vector::Vector(int const size, t defaultValue[]) {
	arraySize = size;
	ArrayLength = size;
	int *NewArray = new t(size);
	for (int i = 0; i < size; i++)
	{
		NewArray[i] = defaultValue[i];

	}
	
}
template<typename t>
Vector::~Vector() {
	delete[] NewArray;
}

template<typename t>
void Vector::pushback(t element) {
	int *freshArray = new t(2 * size);
	for (int i = 0; i < size; i++)
	{
		freshArray[i] == NewArray[i];

	}
	*NewArray = freshArray;
}

template<typename t>
void Vector::pop_back() {
	NewArray[arraySize - 1] = NULL;
	arrayLength--;
}

template<typename t>
const int Vector::size() {
	return arrayLength;
}

template<typename t>
t Vector::at(int index) {


}

template<typename t>
bool Vector::empty() {
	if (arrayLength == 0)
		return true;
	return false;
}

template<typename t>
void Vector::clear() {
	for (int i = 0; i < arraysize; i++)
	{
		NewArray[i] = null;
		arraySize = 0;
		arrayLength = 0;
	}

}

template<typename t>
void Vector::swap(Vector v2) {


}