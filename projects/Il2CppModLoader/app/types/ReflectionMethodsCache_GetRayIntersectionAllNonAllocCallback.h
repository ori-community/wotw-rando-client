#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class** type_info;
        inline app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache", "GetRayIntersectionAllNonAllocCallback");
        }
        inline app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback
} // namespace app::classes::types
