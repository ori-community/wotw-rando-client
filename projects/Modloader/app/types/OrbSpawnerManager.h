#pragma once
#include <Modloader/app/structs/OrbSpawnerManager.h>
#include <Modloader/app/structs/OrbSpawnerManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrbSpawnerManager {
        inline app::OrbSpawnerManager__Class** type_info() {
            static app::OrbSpawnerManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrbSpawnerManager__Class**)(modloader::win::memory::resolve_rva(0x04712110));
            }
            return cache;
        }
        inline app::OrbSpawnerManager__Class* get_class() {
            return il2cpp::get_class<app::OrbSpawnerManager__Class>(type_info(), "", "OrbSpawnerManager");
        }
        inline app::OrbSpawnerManager* create() {
            return il2cpp::create_object<app::OrbSpawnerManager>(get_class());
        }
    } // namespace OrbSpawnerManager
} // namespace app::classes::types
