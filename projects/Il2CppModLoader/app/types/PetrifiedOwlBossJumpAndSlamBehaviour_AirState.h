#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossJumpAndSlamBehaviour_AirState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class** type_info;
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class>(type_info, "", "PetrifiedOwlBossJumpAndSlamBehaviour", "AirState");
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState>(get_class());
        }
    } // namespace PetrifiedOwlBossJumpAndSlamBehaviour_AirState
} // namespace app::classes::types
