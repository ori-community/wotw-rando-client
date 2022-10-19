#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlByte__Array {
        inline app::SqlByte__Array__Class** type_info = (app::SqlByte__Array__Class**)(modloader::win::memory::resolve_rva(0x047241E0));
        inline app::SqlByte__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlByte__Array__Class>(type_info, "System.Data.SqlTypes", "SqlByte[]");
        }
        inline app::SqlByte__Array* create() {
            return il2cpp::create_object<app::SqlByte__Array>(get_class());
        }
    } // namespace SqlByte__Array
} // namespace app::classes::types
