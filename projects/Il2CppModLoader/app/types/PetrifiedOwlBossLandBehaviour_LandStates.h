#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLandBehaviour_LandStates {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLandBehaviour_LandStates__Class** type_info;
        inline app::PetrifiedOwlBossLandBehaviour_LandStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLandBehaviour_LandStates__Class>(type_info, "", "PetrifiedOwlBossLandBehaviour", "LandStates");
        }
        inline app::PetrifiedOwlBossLandBehaviour_LandStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLandBehaviour_LandStates>(get_class());
        }
    } // namespace PetrifiedOwlBossLandBehaviour_LandStates
} // namespace app::classes::types
