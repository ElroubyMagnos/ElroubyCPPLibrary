#pragma once
using namespace std;
#include <vector>

template <class T>
class ListSharp: public vector<T>
{
public:
	void Add(T item)
	{
		this->push_back(item);
	}

	void Remove(T item)
	{
		auto Removing = std::remove(this->begin(), this->end(), item);
		this->erase(Removing, this->end());
	}

	void RemoveAt(int index)
	{
		if (index < this->size() && index >= 0)
		{
			this->erase(this->begin() + index);
		}
	}

	bool Contains(T item)
	{
		for (int i = 0; i < this->Count(); i++)
		{
			if (this->at(i) == item) {
				return true;
			}
		}

		return false;
	}

	int Count()
	{
		return this->size();
	}
};

