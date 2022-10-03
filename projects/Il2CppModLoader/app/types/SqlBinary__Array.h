#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlBinary__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlBinary__Array__Class** type_info;
        inline app::SqlBinary__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlBinary__Array__Class>(type_info, "System.Data.SqlTypes", "SqlBinary[]");
        }
        inline app::SqlBinary__Array* create() {
            return il2cpp::create_object<app::SqlBinary__Array>(get_class());
        }
    } // namespace SqlBinary__Array
} // namespace app::classes::types
