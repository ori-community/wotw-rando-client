#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_GetRaycastNonAllocCallback {
        inline app::ReflectionMethodsCache_GetRaycastNonAllocCallback__Class** type_info = (app::ReflectionMethodsCache_GetRaycastNonAllocCallback__Class**)(modloader::win::memory::resolve_rva(0x0478A9E8));
        inline app::ReflectionMethodsCache_GetRaycastNonAllocCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_GetRaycastNonAllocCallback__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache", "GetRaycastNonAllocCallback");
        }
        inline app::ReflectionMethodsCache_GetRaycastNonAllocCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_GetRaycastNonAllocCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_GetRaycastNonAllocCallback
} // namespace app::classes::types
