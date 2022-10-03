#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlBytesStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlBytesStorage__Class** type_info;
        inline app::SqlBytesStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlBytesStorage__Class>(type_info, "System.Data.Common", "SqlBytesStorage");
        }
        inline app::SqlBytesStorage* create() {
            return il2cpp::create_object<app::SqlBytesStorage>(get_class());
        }
    } // namespace SqlBytesStorage
} // namespace app::classes::types
