#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates__Class** type_info;
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates__Class>(type_info, "", "PetrifiedOwlBossJumpAndSlamBehaviour", "JumpAndSlamStates");
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates>(get_class());
        }
    } // namespace PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates
} // namespace app::classes::types
