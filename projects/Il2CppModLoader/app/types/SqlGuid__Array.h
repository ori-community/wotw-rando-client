#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlGuid__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlGuid__Array__Class** type_info;
        inline app::SqlGuid__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlGuid__Array__Class>(type_info, "System.Data.SqlTypes", "SqlGuid[]");
        }
        inline app::SqlGuid__Array* create() {
            return il2cpp::create_object<app::SqlGuid__Array>(get_class());
        }
    } // namespace SqlGuid__Array
} // namespace app::classes::types
