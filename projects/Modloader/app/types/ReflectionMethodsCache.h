#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReflectionMethodsCache__Class.h>
#include <Modloader/app/structs/ReflectionMethodsCache.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache {
        inline app::ReflectionMethodsCache__Class** type_info = (app::ReflectionMethodsCache__Class**)(modloader::win::memory::resolve_rva(0x047089B0));
        inline app::ReflectionMethodsCache__Class* get_class() {
            return il2cpp::get_class<app::ReflectionMethodsCache__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache");
        }
        inline app::ReflectionMethodsCache* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache>(get_class());
        }
    } // namespace ReflectionMethodsCache
} // namespace app::classes::types
