#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionTypeLoadException {
        inline app::ReflectionTypeLoadException__Class** type_info = (app::ReflectionTypeLoadException__Class**)(modloader::win::memory::resolve_rva(0x047851D8));
        inline app::ReflectionTypeLoadException__Class* get_class() {
            return il2cpp::get_class<app::ReflectionTypeLoadException__Class>(type_info, "System.Reflection", "ReflectionTypeLoadException");
        }
        inline app::ReflectionTypeLoadException* create() {
            return il2cpp::create_object<app::ReflectionTypeLoadException>(get_class());
        }
    } // namespace ReflectionTypeLoadException
} // namespace app::classes::types
