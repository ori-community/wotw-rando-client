#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlByte__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlByte__Array__Class** type_info;
        inline app::SqlByte__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlByte__Array__Class>(type_info, "System.Data.SqlTypes", "SqlByte[]");
        }
        inline app::SqlByte__Array* create() {
            return il2cpp::create_object<app::SqlByte__Array>(get_class());
        }
    } // namespace SqlByte__Array
} // namespace app::classes::types
