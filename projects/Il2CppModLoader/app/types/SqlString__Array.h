#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlString__Array {
        inline app::SqlString__Array__Class** type_info = (app::SqlString__Array__Class**)(modloader::win::memory::resolve_rva(0x04743468));
        inline app::SqlString__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlString__Array__Class>(type_info, "System.Data.SqlTypes", "SqlString[]");
        }
        inline app::SqlString__Array* create() {
            return il2cpp::create_object<app::SqlString__Array>(get_class());
        }
    } // namespace SqlString__Array
} // namespace app::classes::types
