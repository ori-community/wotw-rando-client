#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1DiveLaserBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFight1DiveLaserBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1DiveLaserBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1DiveLaserBehaviour");
        }
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1DiveLaserBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1DiveLaserBehaviour
} // namespace app::classes::types
