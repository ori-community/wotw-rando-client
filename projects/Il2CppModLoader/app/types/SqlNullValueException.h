#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlNullValueException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlNullValueException__Class** type_info;
        inline app::SqlNullValueException__Class* get_class() {
            return il2cpp::get_class<app::SqlNullValueException__Class>(type_info, "System.Data.SqlTypes", "SqlNullValueException");
        }
        inline app::SqlNullValueException* create() {
            return il2cpp::create_object<app::SqlNullValueException>(get_class());
        }
    } // namespace SqlNullValueException
} // namespace app::classes::types
