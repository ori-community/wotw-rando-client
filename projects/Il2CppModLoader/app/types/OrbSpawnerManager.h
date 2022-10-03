#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrbSpawnerManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrbSpawnerManager__Class** type_info;
        inline app::OrbSpawnerManager__Class* get_class() {
            return il2cpp::get_class<app::OrbSpawnerManager__Class>(type_info, "", "OrbSpawnerManager");
        }
        inline app::OrbSpawnerManager* create() {
            return il2cpp::create_object<app::OrbSpawnerManager>(get_class());
        }
    } // namespace OrbSpawnerManager
} // namespace app::classes::types
