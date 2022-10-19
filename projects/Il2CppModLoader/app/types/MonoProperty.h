#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoProperty {
        inline app::MonoProperty__Class** type_info = (app::MonoProperty__Class**)(modloader::win::memory::resolve_rva(0x04783CF8));
        inline app::MonoProperty__Class* get_class() {
            return il2cpp::get_class<app::MonoProperty__Class>(type_info, "System.Reflection", "MonoProperty");
        }
        inline app::MonoProperty* create() {
            return il2cpp::create_object<app::MonoProperty>(get_class());
        }
    } // namespace MonoProperty
} // namespace app::classes::types
