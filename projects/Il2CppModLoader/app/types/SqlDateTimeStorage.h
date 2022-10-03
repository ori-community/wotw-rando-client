#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlDateTimeStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlDateTimeStorage__Class** type_info;
        inline app::SqlDateTimeStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlDateTimeStorage__Class>(type_info, "System.Data.Common", "SqlDateTimeStorage");
        }
        inline app::SqlDateTimeStorage* create() {
            return il2cpp::create_object<app::SqlDateTimeStorage>(get_class());
        }
    } // namespace SqlDateTimeStorage
} // namespace app::classes::types
