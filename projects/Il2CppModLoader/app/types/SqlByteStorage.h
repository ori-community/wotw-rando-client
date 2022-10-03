#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlByteStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlByteStorage__Class** type_info;
        inline app::SqlByteStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlByteStorage__Class>(type_info, "System.Data.Common", "SqlByteStorage");
        }
        inline app::SqlByteStorage* create() {
            return il2cpp::create_object<app::SqlByteStorage>(get_class());
        }
    } // namespace SqlByteStorage
} // namespace app::classes::types
