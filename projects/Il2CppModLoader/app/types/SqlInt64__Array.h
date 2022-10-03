#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlInt64__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlInt64__Array__Class** type_info;
        inline app::SqlInt64__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlInt64__Array__Class>(type_info, "System.Data.SqlTypes", "SqlInt64[]");
        }
        inline app::SqlInt64__Array* create() {
            return il2cpp::create_object<app::SqlInt64__Array>(get_class());
        }
    } // namespace SqlInt64__Array
} // namespace app::classes::types
