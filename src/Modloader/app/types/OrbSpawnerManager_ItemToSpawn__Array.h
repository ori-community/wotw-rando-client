#pragma once
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn__Array.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrbSpawnerManager_ItemToSpawn__Array {
        inline app::OrbSpawnerManager_ItemToSpawn__Array__Class** type_info() {
            static app::OrbSpawnerManager_ItemToSpawn__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OrbSpawnerManager_ItemToSpawn__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OrbSpawnerManager_ItemToSpawn__Array__Class* get_class() {
            return il2cpp::get_class<app::OrbSpawnerManager_ItemToSpawn__Array__Class>(type_info(), "", "OrbSpawnerManager+ItemToSpawn[]");
        }
        inline app::OrbSpawnerManager_ItemToSpawn__Array* create() {
            return il2cpp::create_object<app::OrbSpawnerManager_ItemToSpawn__Array>(get_class());
        }
    } // namespace OrbSpawnerManager_ItemToSpawn__Array
} // namespace app::classes::types
