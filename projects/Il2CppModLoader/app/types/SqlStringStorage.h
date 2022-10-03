#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlStringStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlStringStorage__Class** type_info;
        inline app::SqlStringStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlStringStorage__Class>(type_info, "System.Data.Common", "SqlStringStorage");
        }
        inline app::SqlStringStorage* create() {
            return il2cpp::create_object<app::SqlStringStorage>(get_class());
        }
    } // namespace SqlStringStorage
} // namespace app::classes::types
