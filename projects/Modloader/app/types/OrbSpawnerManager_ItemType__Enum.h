#pragma once
#include <Modloader/app/structs/OrbSpawnerManager_ItemType__Enum.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrbSpawnerManager_ItemType__Enum {
        inline app::OrbSpawnerManager_ItemType__Enum__Class** type_info() {
            static app::OrbSpawnerManager_ItemType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrbSpawnerManager_ItemType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474DF20));
            }
            return cache;
        }
        inline app::OrbSpawnerManager_ItemType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::OrbSpawnerManager_ItemType__Enum__Class>(type_info(), "", "OrbSpawnerManager", "ItemType");
        }
        inline app::OrbSpawnerManager_ItemType__Enum* create() {
            return il2cpp::create_object<app::OrbSpawnerManager_ItemType__Enum>(get_class());
        }
    } // namespace OrbSpawnerManager_ItemType__Enum
} // namespace app::classes::types
