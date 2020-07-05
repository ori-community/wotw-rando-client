#pragma once

#include <string>

struct intercept {
    intercept(uint64_t o, PVOID* oP, PVOID iP, std::string s);

    int type;
    std::string name;
    uint64_t offset;
    void** original_pointer;
    void* intercept_pointer;
    intercept* next;
    intercept* prev;
};

extern intercept* last_intercept;

uint64_t resolve_rva(uint64_t rva);
uint64_t unresolve_rva(uint64_t ptr);
void interception_init();
void interception_detach();

