#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1GroundLaserBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1GroundLaserBehaviour");
        }
        inline app::PetrifiedOwlBossFight1GroundLaserBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1GroundLaserBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1GroundLaserBehaviour
} // namespace app::classes::types
