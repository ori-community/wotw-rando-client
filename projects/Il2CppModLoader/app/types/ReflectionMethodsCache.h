#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionMethodsCache__Class** type_info;
        inline app::ReflectionMethodsCache__Class* get_class() {
            return il2cpp::get_class<app::ReflectionMethodsCache__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache");
        }
        inline app::ReflectionMethodsCache* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache>(get_class());
        }
    } // namespace ReflectionMethodsCache
} // namespace app::classes::types
