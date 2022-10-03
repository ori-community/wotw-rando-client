#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionTypeLoadException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionTypeLoadException__Class** type_info;
        inline app::ReflectionTypeLoadException__Class* get_class() {
            return il2cpp::get_class<app::ReflectionTypeLoadException__Class>(type_info, "System.Reflection", "ReflectionTypeLoadException");
        }
        inline app::ReflectionTypeLoadException* create() {
            return il2cpp::create_object<app::ReflectionTypeLoadException>(get_class());
        }
    } // namespace ReflectionTypeLoadException
} // namespace app::classes::types
