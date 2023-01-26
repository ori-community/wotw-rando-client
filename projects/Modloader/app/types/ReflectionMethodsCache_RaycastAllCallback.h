#pragma once
#include <Modloader/app/structs/ReflectionMethodsCache_RaycastAllCallback.h>
#include <Modloader/app/structs/ReflectionMethodsCache_RaycastAllCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_RaycastAllCallback {
        inline app::ReflectionMethodsCache_RaycastAllCallback__Class** type_info() {
            static app::ReflectionMethodsCache_RaycastAllCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionMethodsCache_RaycastAllCallback__Class**)(modloader::win::memory::resolve_rva(0x04769FE0));
            }
            return cache;
        }
        inline app::ReflectionMethodsCache_RaycastAllCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_RaycastAllCallback__Class>(type_info(), "UnityEngine.UI", "ReflectionMethodsCache", "RaycastAllCallback");
        }
        inline app::ReflectionMethodsCache_RaycastAllCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_RaycastAllCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_RaycastAllCallback
} // namespace app::classes::types
