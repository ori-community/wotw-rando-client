#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharStorage__Class** type_info;
        inline app::CharStorage__Class* get_class() {
            return il2cpp::get_class<app::CharStorage__Class>(type_info, "System.Data.Common", "CharStorage");
        }
        inline app::CharStorage* create() {
            return il2cpp::create_object<app::CharStorage>(get_class());
        }
    } // namespace CharStorage
} // namespace app::classes::types
