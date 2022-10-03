#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossJumpAndSlamBehaviour_JumpState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState__Class** type_info;
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState__Class>(type_info, "", "PetrifiedOwlBossJumpAndSlamBehaviour", "JumpState");
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState>(get_class());
        }
    } // namespace PetrifiedOwlBossJumpAndSlamBehaviour_JumpState
} // namespace app::classes::types
