#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocalDataStoreHolder {
        inline app::LocalDataStoreHolder__Class** type_info = (app::LocalDataStoreHolder__Class**)(modloader::win::memory::resolve_rva(0x0477CCB8));
        inline app::LocalDataStoreHolder__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreHolder__Class>(type_info, "System", "LocalDataStoreHolder");
        }
        inline app::LocalDataStoreHolder* create() {
            return il2cpp::create_object<app::LocalDataStoreHolder>(get_class());
        }
    } // namespace LocalDataStoreHolder
} // namespace app::classes::types
