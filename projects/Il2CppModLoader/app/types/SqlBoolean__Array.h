#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlBoolean__Array {
        inline app::SqlBoolean__Array__Class** type_info = (app::SqlBoolean__Array__Class**)(modloader::win::memory::resolve_rva(0x047147D8));
        inline app::SqlBoolean__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlBoolean__Array__Class>(type_info, "System.Data.SqlTypes", "SqlBoolean[]");
        }
        inline app::SqlBoolean__Array* create() {
            return il2cpp::create_object<app::SqlBoolean__Array>(get_class());
        }
    } // namespace SqlBoolean__Array
} // namespace app::classes::types
