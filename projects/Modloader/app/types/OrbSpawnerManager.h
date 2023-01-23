#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OrbSpawnerManager__Class.h>
#include <Modloader/app/structs/OrbSpawnerManager.h>

namespace app::classes::types {
    namespace OrbSpawnerManager {
        inline app::OrbSpawnerManager__Class** type_info = (app::OrbSpawnerManager__Class**)(modloader::win::memory::resolve_rva(0x04712110));
        inline app::OrbSpawnerManager__Class* get_class() {
            return il2cpp::get_class<app::OrbSpawnerManager__Class>(type_info, "", "OrbSpawnerManager");
        }
        inline app::OrbSpawnerManager* create() {
            return il2cpp::create_object<app::OrbSpawnerManager>(get_class());
        }
    } // namespace OrbSpawnerManager
} // namespace app::classes::types
