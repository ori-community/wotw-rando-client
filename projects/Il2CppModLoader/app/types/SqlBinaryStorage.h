#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlBinaryStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlBinaryStorage__Class** type_info;
        inline app::SqlBinaryStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlBinaryStorage__Class>(type_info, "System.Data.Common", "SqlBinaryStorage");
        }
        inline app::SqlBinaryStorage* create() {
            return il2cpp::create_object<app::SqlBinaryStorage>(get_class());
        }
    } // namespace SqlBinaryStorage
} // namespace app::classes::types
