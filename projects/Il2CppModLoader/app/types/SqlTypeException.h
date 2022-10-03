#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlTypeException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlTypeException__Class** type_info;
        inline app::SqlTypeException__Class* get_class() {
            return il2cpp::get_class<app::SqlTypeException__Class>(type_info, "System.Data.SqlTypes", "SqlTypeException");
        }
        inline app::SqlTypeException* create() {
            return il2cpp::create_object<app::SqlTypeException>(get_class());
        }
    } // namespace SqlTypeException
} // namespace app::classes::types
