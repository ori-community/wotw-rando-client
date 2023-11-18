#pragma once
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn__Array.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn__Boxed.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrbSpawnerManager_ItemToSpawn {
        inline app::OrbSpawnerManager_ItemToSpawn__Class** type_info() {
            static app::OrbSpawnerManager_ItemToSpawn__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OrbSpawnerManager_ItemToSpawn__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OrbSpawnerManager_ItemToSpawn__Class* get_class() {
            return il2cpp::get_nested_class<app::OrbSpawnerManager_ItemToSpawn__Class>(type_info(), "", "OrbSpawnerManager", "ItemToSpawn");
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
        inline app::OrbSpawnerManager_ItemToSpawn__Array* create_array(const std::vector<app::OrbSpawnerManager_ItemToSpawn>& items) {
            return il2cpp::array_new<app::OrbSpawnerManager_ItemToSpawn__Array>(get_class(), items);
        }
    } // namespace OrbSpawnerManager_ItemToSpawn
} // namespace app::classes::types
