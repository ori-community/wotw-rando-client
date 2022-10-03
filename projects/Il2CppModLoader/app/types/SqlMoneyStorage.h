#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlMoneyStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlMoneyStorage__Class** type_info;
        inline app::SqlMoneyStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlMoneyStorage__Class>(type_info, "System.Data.Common", "SqlMoneyStorage");
        }
        inline app::SqlMoneyStorage* create() {
            return il2cpp::create_object<app::SqlMoneyStorage>(get_class());
        }
    } // namespace SqlMoneyStorage
} // namespace app::classes::types
