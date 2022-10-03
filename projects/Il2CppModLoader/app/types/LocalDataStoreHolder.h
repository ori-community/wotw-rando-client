#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalDataStoreHolder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocalDataStoreHolder__Class** type_info;
        inline app::LocalDataStoreHolder__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreHolder__Class>(type_info, "System", "LocalDataStoreHolder");
        }
        inline app::LocalDataStoreHolder* create() {
            return il2cpp::create_object<app::LocalDataStoreHolder>(get_class());
        }
    } // namespace LocalDataStoreHolder
} // namespace app::classes::types
