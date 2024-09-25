#include "pch.h"
#include "ExtensionMethods.h"

string ExtensionsMethods::ToLowerAll(string str)
{
	auto New = "";
	for (char s : str)
	{
		New += tolower(s);
	}

	return New;
}

string ExtensionsMethods::ToUpperAll(string str)
{
	auto New = "";
	for (char s : str)
	{
		New += toupper(s);
	}

	return New;
}

bool ExtensionsMethods::CheckEqualStrings(string first, string second)
{
	return ToLowerAll(first) == ToLowerAll(second);
}
