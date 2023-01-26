#pragma once
#include <Modloader/app/structs/WeaponAnimationPlayer.h>
#include <Modloader/app/structs/WeaponAnimationPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponAnimationPlayer {
        inline app::WeaponAnimationPlayer__Class** type_info() {
            static app::WeaponAnimationPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponAnimationPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::WeaponAnimationPlayer__Class>(type_info(), "experiments.comboSystem", "WeaponAnimationPlayer");
        }
        inline app::WeaponAnimationPlayer* create() {
            return il2cpp::create_object<app::WeaponAnimationPlayer>(get_class());
        }
    } // namespace WeaponAnimationPlayer
} // namespace app::classes::types
