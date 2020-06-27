#pragma once

#include <string>

struct intercept {
    intercept(__int64 o, PVOID* oP, PVOID iP, std::string s, int t = 0);

    int type;
    std::string name;
    __int64 offset;
    PVOID* original_pointer;
    PVOID intercept_pointer;
    intercept* next;
    intercept* prev;
};

extern intercept* last_intercept;

__int64 resolve_rva(__int64 rva);
void interception_init();
void interception_detach();
