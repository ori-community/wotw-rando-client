#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_RaycastAllCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionMethodsCache_RaycastAllCallback__Class** type_info;
        inline app::ReflectionMethodsCache_RaycastAllCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_RaycastAllCallback__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache", "RaycastAllCallback");
        }
        inline app::ReflectionMethodsCache_RaycastAllCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_RaycastAllCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_RaycastAllCallback
} // namespace app::classes::types
