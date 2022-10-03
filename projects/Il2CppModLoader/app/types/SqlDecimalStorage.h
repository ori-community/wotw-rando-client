#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlDecimalStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlDecimalStorage__Class** type_info;
        inline app::SqlDecimalStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlDecimalStorage__Class>(type_info, "System.Data.Common", "SqlDecimalStorage");
        }
        inline app::SqlDecimalStorage* create() {
            return il2cpp::create_object<app::SqlDecimalStorage>(get_class());
        }
    } // namespace SqlDecimalStorage
} // namespace app::classes::types
