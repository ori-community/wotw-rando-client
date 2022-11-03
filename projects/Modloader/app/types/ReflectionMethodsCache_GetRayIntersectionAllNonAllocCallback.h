#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback {
        inline app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class** type_info = (app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class**)(modloader::win::memory::resolve_rva(0x0476F730));
        inline app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache", "GetRayIntersectionAllNonAllocCallback");
        }
        inline app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback
} // namespace app::classes::types
