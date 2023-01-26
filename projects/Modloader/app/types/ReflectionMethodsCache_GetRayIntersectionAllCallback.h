#pragma once
#include <Modloader/app/structs/ReflectionMethodsCache_GetRayIntersectionAllCallback.h>
#include <Modloader/app/structs/ReflectionMethodsCache_GetRayIntersectionAllCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_GetRayIntersectionAllCallback {
        inline app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class** type_info() {
            static app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class**)(modloader::win::memory::resolve_rva(0x04717D68));
            }
            return cache;
        }
        inline app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class>(type_info(), "UnityEngine.UI", "ReflectionMethodsCache", "GetRayIntersectionAllCallback");
        }
        inline app::ReflectionMethodsCache_GetRayIntersectionAllCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_GetRayIntersectionAllCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_GetRayIntersectionAllCallback
} // namespace app::classes::types
