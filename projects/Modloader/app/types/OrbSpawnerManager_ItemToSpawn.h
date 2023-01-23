#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn__Class.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn__Boxed.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn__Array.h>

namespace app::classes::types {
    namespace OrbSpawnerManager_ItemToSpawn {
        namespace {
            inline app::OrbSpawnerManager_ItemToSpawn__Class* type_info_ref = nullptr;
        }
        inline app::OrbSpawnerManager_ItemToSpawn__Class** type_info = &type_info_ref;
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
        inline app::OrbSpawnerManager_ItemToSpawn__Array* create_array(const std::vector<app::OrbSpawnerManager_ItemToSpawn>& items) {
            return il2cpp::array_new<app::OrbSpawnerManager_ItemToSpawn__Array>(get_class(), items);
        }
    } // namespace OrbSpawnerManager_ItemToSpawn
} // namespace app::classes::types
