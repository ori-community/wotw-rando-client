#pragma once

#include <string_view>

struct il2cpp_intercept
{
    il2cpp_intercept(bool p_ztatic, std::string_view p_namezpace, std::string_view p_klass, std::string_view p_nested,
        std::string_view p_method_name, std::string p_params, void** p_original_pointer, void* p_intercept_pointer);

    bool ztatic;
    std::string_view namezpace;
    std::string_view klass;
    std::string_view nested;
    std::string_view method_name;
    int param_count;
    void** original_pointer;
    void* intercept_pointer;
    il2cpp_intercept* next;
    il2cpp_intercept* prev;
};

struct intercept
{
    intercept(uint64_t o, void** oP, void* iP, std::string_view s);

    int type;
    std::string_view name;
    uint64_t offset;
    void** original_pointer;
    void* intercept_pointer;
    intercept* next;
    intercept* prev;
};

extern intercept* last_intercept;
extern il2cpp_intercept* last_il2cpp_intercept;

uint64_t resolve_rva(uint64_t rva);
uint64_t unresolve_rva(uint64_t ptr);
void interception_init();
void interception_detach();

