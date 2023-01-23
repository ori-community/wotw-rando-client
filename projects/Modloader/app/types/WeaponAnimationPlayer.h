#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WeaponAnimationPlayer__Class.h>
#include <Modloader/app/structs/WeaponAnimationPlayer.h>

namespace app::classes::types {
    namespace WeaponAnimationPlayer {
        namespace {
            inline app::WeaponAnimationPlayer__Class* type_info_ref = nullptr;
        }
        inline app::WeaponAnimationPlayer__Class** type_info = &type_info_ref;
        inline app::WeaponAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::WeaponAnimationPlayer__Class>(type_info, "experiments.comboSystem", "WeaponAnimationPlayer");
        }
        inline app::WeaponAnimationPlayer* create() {
            return il2cpp::create_object<app::WeaponAnimationPlayer>(get_class());
        }
    } // namespace WeaponAnimationPlayer
} // namespace app::classes::types
