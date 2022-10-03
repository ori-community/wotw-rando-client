#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionExtensions_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionExtensions_c__Class** type_info;
        inline app::ReflectionExtensions_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionExtensions_c__Class>(type_info, "Moon", "ReflectionExtensions", "<>c");
        }
        inline app::ReflectionExtensions_c* create() {
            return il2cpp::create_object<app::ReflectionExtensions_c>(get_class());
        }
    } // namespace ReflectionExtensions_c
} // namespace app::classes::types
