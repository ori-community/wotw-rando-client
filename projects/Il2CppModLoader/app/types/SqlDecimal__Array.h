#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlDecimal__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlDecimal__Array__Class** type_info;
        inline app::SqlDecimal__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlDecimal__Array__Class>(type_info, "System.Data.SqlTypes", "SqlDecimal[]");
        }
        inline app::SqlDecimal__Array* create() {
            return il2cpp::create_object<app::SqlDecimal__Array>(get_class());
        }
    } // namespace SqlDecimal__Array
} // namespace app::classes::types
