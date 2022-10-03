#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlSingle__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlSingle__Array__Class** type_info;
        inline app::SqlSingle__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlSingle__Array__Class>(type_info, "System.Data.SqlTypes", "SqlSingle[]");
        }
        inline app::SqlSingle__Array* create() {
            return il2cpp::create_object<app::SqlSingle__Array>(get_class());
        }
    } // namespace SqlSingle__Array
} // namespace app::classes::types
