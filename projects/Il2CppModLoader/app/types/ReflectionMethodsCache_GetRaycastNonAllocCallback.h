#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_GetRaycastNonAllocCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionMethodsCache_GetRaycastNonAllocCallback__Class** type_info;
        inline app::ReflectionMethodsCache_GetRaycastNonAllocCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_GetRaycastNonAllocCallback__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache", "GetRaycastNonAllocCallback");
        }
        inline app::ReflectionMethodsCache_GetRaycastNonAllocCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_GetRaycastNonAllocCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_GetRaycastNonAllocCallback
} // namespace app::classes::types
