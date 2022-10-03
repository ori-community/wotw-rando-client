#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrbSpawnerManager_ItemType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrbSpawnerManager_ItemType__Enum__Class** type_info;
        inline app::OrbSpawnerManager_ItemType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::OrbSpawnerManager_ItemType__Enum__Class>(type_info, "", "OrbSpawnerManager", "ItemType");
        }
        inline app::OrbSpawnerManager_ItemType__Enum* create() {
            return il2cpp::create_object<app::OrbSpawnerManager_ItemType__Enum>(get_class());
        }
    } // namespace OrbSpawnerManager_ItemType__Enum
} // namespace app::classes::types
