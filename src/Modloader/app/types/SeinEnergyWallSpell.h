#pragma once
#include <Modloader/app/structs/SeinEnergyWallSpell.h>
#include <Modloader/app/structs/SeinEnergyWallSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyWallSpell {
        inline app::SeinEnergyWallSpell__Class** type_info() {
            static app::SeinEnergyWallSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEnergyWallSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEnergyWallSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyWallSpell__Class>(type_info(), "", "SeinEnergyWallSpell");
        }
        inline app::SeinEnergyWallSpell* create() {
            return il2cpp::create_object<app::SeinEnergyWallSpell>(get_class());
        }
    } // namespace SeinEnergyWallSpell
} // namespace app::classes::types
