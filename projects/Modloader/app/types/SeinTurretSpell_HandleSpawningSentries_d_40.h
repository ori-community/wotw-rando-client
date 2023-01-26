#pragma once
#include <Modloader/app/structs/SeinTurretSpell_HandleSpawningSentries_d_40.h>
#include <Modloader/app/structs/SeinTurretSpell_HandleSpawningSentries_d_40__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinTurretSpell_HandleSpawningSentries_d_40 {
        inline app::SeinTurretSpell_HandleSpawningSentries_d_40__Class** type_info() {
            static app::SeinTurretSpell_HandleSpawningSentries_d_40__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinTurretSpell_HandleSpawningSentries_d_40__Class**)(modloader::win::memory::resolve_rva(0x047681A0));
            }
            return cache;
        }
        inline app::SeinTurretSpell_HandleSpawningSentries_d_40__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinTurretSpell_HandleSpawningSentries_d_40__Class>(type_info(), "", "SeinTurretSpell", "<HandleSpawningSentries>d__40");
        }
        inline app::SeinTurretSpell_HandleSpawningSentries_d_40* create() {
            return il2cpp::create_object<app::SeinTurretSpell_HandleSpawningSentries_d_40>(get_class());
        }
    } // namespace SeinTurretSpell_HandleSpawningSentries_d_40
} // namespace app::classes::types
