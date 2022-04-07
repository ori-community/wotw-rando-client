#pragma once

#include <Il2CppModLoader/macros.h>

#include <string_view>

namespace modloader
{
    namespace intercept
    {
        struct IL2CPP_MODLOADER_DLLEXPORT il2cpp_intercept
        {
            il2cpp_intercept(bool p_ztatic, std::string_view p_namezpace, std::string_view p_klass, std::string_view p_nested,
                std::string_view p_method_name, std::string p_params, std::string_view p_overload_params,
                void** p_original_pointer, void* p_intercept_pointer, int virtual_count);

            std::string_view namezpace;
            std::string_view klass;
            std::string_view nested;
            std::string_view method_name;
            std::string overload_params;

            bool ztatic;
            int param_count;
            int virtual_count;

            void** original_pointer;
            void* intercept_pointer;

            il2cpp_intercept* next;
            il2cpp_intercept* prev;
        };

        struct IL2CPP_MODLOADER_DLLEXPORT intercept
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

        IL2CPP_MODLOADER_DLLEXPORT uint64_t resolve_rva(uint64_t rva);
        IL2CPP_MODLOADER_DLLEXPORT uint64_t unresolve_rva(uint64_t ptr);
        void interception_init();
        void interception_detach();
    }
}
