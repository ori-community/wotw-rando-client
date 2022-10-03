#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlString__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlString__Array__Class** type_info;
        inline app::SqlString__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlString__Array__Class>(type_info, "System.Data.SqlTypes", "SqlString[]");
        }
        inline app::SqlString__Array* create() {
            return il2cpp::create_object<app::SqlString__Array>(get_class());
        }
    } // namespace SqlString__Array
} // namespace app::classes::types
