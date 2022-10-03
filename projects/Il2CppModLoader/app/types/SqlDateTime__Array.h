#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlDateTime__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlDateTime__Array__Class** type_info;
        inline app::SqlDateTime__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlDateTime__Array__Class>(type_info, "System.Data.SqlTypes", "SqlDateTime[]");
        }
        inline app::SqlDateTime__Array* create() {
            return il2cpp::create_object<app::SqlDateTime__Array>(get_class());
        }
    } // namespace SqlDateTime__Array
} // namespace app::classes::types
