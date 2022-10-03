#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalDataStoreMgr {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocalDataStoreMgr__Class** type_info;
        inline app::LocalDataStoreMgr__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreMgr__Class>(type_info, "System", "LocalDataStoreMgr");
        }
        inline app::LocalDataStoreMgr* create() {
            return il2cpp::create_object<app::LocalDataStoreMgr>(get_class());
        }
    } // namespace LocalDataStoreMgr
} // namespace app::classes::types
