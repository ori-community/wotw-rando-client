#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlDouble__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlDouble__Array__Class** type_info;
        inline app::SqlDouble__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlDouble__Array__Class>(type_info, "System.Data.SqlTypes", "SqlDouble[]");
        }
        inline app::SqlDouble__Array* create() {
            return il2cpp::create_object<app::SqlDouble__Array>(get_class());
        }
    } // namespace SqlDouble__Array
} // namespace app::classes::types
