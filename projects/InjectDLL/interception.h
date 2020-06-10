#pragma once
#include "pch.h"
#include <string>

struct intercept;
extern intercept* last_intercept;
struct intercept {
	intercept(__int64 o, PVOID* oP, PVOID iP, std::string s) : name(std::move(s)), offset(o), originalPointer(oP),
		interceptPointer(iP) {
		prev = last_intercept;
		last_intercept = this;
	}
	std::string name;
	__int64 offset;
	PVOID* originalPointer;
	PVOID interceptPointer;
	intercept* prev;
};


__int64 resolve_rva(__int64 rva);
void interception_init();
void interception_detach();