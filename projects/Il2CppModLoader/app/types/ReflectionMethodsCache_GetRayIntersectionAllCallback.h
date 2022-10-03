#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_GetRayIntersectionAllCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class** type_info;
        inline app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache", "GetRayIntersectionAllCallback");
        }
        inline app::ReflectionMethodsCache_GetRayIntersectionAllCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_GetRayIntersectionAllCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_GetRayIntersectionAllCallback
} // namespace app::classes::types
