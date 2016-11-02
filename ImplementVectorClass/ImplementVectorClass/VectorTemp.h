#pragma once
#ifndef VectorTemp_h
#define VectorTemp_h

template<typename t>
class Vector {
public:	
	~Vector();
	Vector();
	Vector(int const size);
	Vector(int const size, t defaultValue[]);
	void pushback(t element);
	void pop_back();
	const int size();
	t at(int index);
	bool empty();
	void clear();
	void swap(Vector v2);
private:
	int arraySize;
	int arrayLength;
	

};

#endif // !VectorTemp_h
