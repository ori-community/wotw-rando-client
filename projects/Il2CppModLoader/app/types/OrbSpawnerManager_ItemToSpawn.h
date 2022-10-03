#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrbSpawnerManager_ItemToSpawn {
        namespace {
            app::OrbSpawnerManager_ItemToSpawn__Class* type_info_ref = nullptr;
        }
        app::OrbSpawnerManager_ItemToSpawn__Class** type_info = &type_info_ref;
        inline app::OrbSpawnerManager_ItemToSpawn__Class* get_class() {
            return il2cpp::get_nested_class<app::OrbSpawnerManager_ItemToSpawn__Class>(type_info, "", "OrbSpawnerManager", "ItemToSpawn");
        }
        inline app::OrbSpawnerManager_ItemToSpawn* create() {
            return il2cpp::create_object<app::OrbSpawnerManager_ItemToSpawn>(get_class());
        }
        inline app::OrbSpawnerManager_ItemToSpawn__Boxed* box(app::OrbSpawnerManager_ItemToSpawn value) {
            return il2cpp::box_value<app::OrbSpawnerManager_ItemToSpawn__Boxed>(get_class(), value);
        }
        inline app::OrbSpawnerManager_ItemToSpawn__Array* create_array(int size) {
            return il2cpp::array_new<app::OrbSpawnerManager_ItemToSpawn__Array>(get_class(), size);
        }
    } // namespace OrbSpawnerManager_ItemToSpawn
} // namespace app::classes::types
