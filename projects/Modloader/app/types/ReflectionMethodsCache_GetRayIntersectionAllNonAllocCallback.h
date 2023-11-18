#pragma once
#include <Modloader/app/structs/ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback.h>
#include <Modloader/app/structs/ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback {
        inline app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class** type_info() {
            static app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class**)(modloader::win::memory::resolve_rva(0x0476F730));
            }
            return cache;
        }
        inline app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class>(type_info(), "UnityEngine.UI", "ReflectionMethodsCache", "GetRayIntersectionAllNonAllocCallback");
        }
        inline app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback
} // namespace app::classes::types
