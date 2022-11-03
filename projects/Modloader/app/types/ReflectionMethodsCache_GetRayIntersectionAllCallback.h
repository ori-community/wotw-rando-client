#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_GetRayIntersectionAllCallback {
        inline app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class** type_info = (app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class**)(modloader::win::memory::resolve_rva(0x04717D68));
        inline app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache", "GetRayIntersectionAllCallback");
        }
        inline app::ReflectionMethodsCache_GetRayIntersectionAllCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_GetRayIntersectionAllCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_GetRayIntersectionAllCallback
} // namespace app::classes::types
