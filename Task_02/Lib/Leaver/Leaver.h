#pragma once
#include <iostream>

#ifdef LEAVELIBRARYDYNAMIC_EXPORTS
#define LEAVELIBRARY_API __declspec(dllexport)
#else 
#define LEAVELIBRARY_API __declspec(dllimport)

#endif

class Leaver {
public:
	LEAVELIBRARY_API void leave(std:: string name);
};

