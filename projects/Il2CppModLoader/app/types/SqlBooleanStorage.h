#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlBooleanStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlBooleanStorage__Class** type_info;
        inline app::SqlBooleanStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlBooleanStorage__Class>(type_info, "System.Data.Common", "SqlBooleanStorage");
        }
        inline app::SqlBooleanStorage* create() {
            return il2cpp::create_object<app::SqlBooleanStorage>(get_class());
        }
    } // namespace SqlBooleanStorage
} // namespace app::classes::types
