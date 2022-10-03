#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlBytes__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlBytes__Array__Class** type_info;
        inline app::SqlBytes__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlBytes__Array__Class>(type_info, "System.Data.SqlTypes", "SqlBytes[]");
        }
        inline app::SqlBytes__Array* create() {
            return il2cpp::create_object<app::SqlBytes__Array>(get_class());
        }
    } // namespace SqlBytes__Array
} // namespace app::classes::types
