#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StringStorage__Class** type_info;
        inline app::StringStorage__Class* get_class() {
            return il2cpp::get_class<app::StringStorage__Class>(type_info, "System.Data.Common", "StringStorage");
        }
        inline app::StringStorage* create() {
            return il2cpp::create_object<app::StringStorage>(get_class());
        }
    } // namespace StringStorage
} // namespace app::classes::types
