#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimePropertyInfo__Array {
        inline app::RuntimePropertyInfo__Array__Class** type_info = (app::RuntimePropertyInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0476EE20));
        inline app::RuntimePropertyInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimePropertyInfo__Array__Class>(type_info, "System.Reflection", "RuntimePropertyInfo[]");
        }
        inline app::RuntimePropertyInfo__Array* create() {
            return il2cpp::create_object<app::RuntimePropertyInfo__Array>(get_class());
        }
    } // namespace RuntimePropertyInfo__Array
} // namespace app::classes::types
