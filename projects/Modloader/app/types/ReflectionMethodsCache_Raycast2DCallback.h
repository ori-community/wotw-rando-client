#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReflectionMethodsCache_Raycast2DCallback__Class.h>
#include <Modloader/app/structs/ReflectionMethodsCache_Raycast2DCallback.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_Raycast2DCallback {
        inline app::ReflectionMethodsCache_Raycast2DCallback__Class** type_info = (app::ReflectionMethodsCache_Raycast2DCallback__Class**)(modloader::win::memory::resolve_rva(0x0479A1B8));
        inline app::ReflectionMethodsCache_Raycast2DCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_Raycast2DCallback__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache", "Raycast2DCallback");
        }
        inline app::ReflectionMethodsCache_Raycast2DCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_Raycast2DCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_Raycast2DCallback
} // namespace app::classes::types
