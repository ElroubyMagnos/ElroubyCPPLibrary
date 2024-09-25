#pragma once
#include "ListSharp.h"

template <class key, class value>
class DictionarySharp
{
public:
	ListSharp<key> Keys;
	ListSharp<value> Values;

	bool ContainsValue(value Value)
	{
		return Values.Contains(Value);
	}

	bool ContainsKey(key Key)
	{
		return Keys.Contains(Key);
	}

	void Add(key Key, value Value)
	{
		Keys.Add(Key);
		Values.Add(Value);
	}

	void Remove(key Key)
	{
		for (auto i = 0; i < Keys.Count(); i++)
		{
			if (Keys[i] == Key) {
				Keys.RemoveAt(i);
				Values.RemoveAt(i);
				break;
			}
		}
	}

	void RemoveAt(int Index)
	{
		Keys.RemoveAt(Index);
		Values.RemoveAt(Index);
	}

	int CountAllVars()
	{
		return Keys.Count() + Values.Count();
	}

	int CountKeys()
	{
		return Keys.Count();
	}

	int CountValues()
	{
		return Values.Count();
	}
};

