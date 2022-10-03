#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlSingleStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlSingleStorage__Class** type_info;
        inline app::SqlSingleStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlSingleStorage__Class>(type_info, "System.Data.Common", "SqlSingleStorage");
        }
        inline app::SqlSingleStorage* create() {
            return il2cpp::create_object<app::SqlSingleStorage>(get_class());
        }
    } // namespace SqlSingleStorage
} // namespace app::classes::types
