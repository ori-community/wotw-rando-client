#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour_JumpState.h>
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour_JumpState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossJumpAndSlamBehaviour_JumpState {
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState__Class** type_info() {
            static app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState__Class**)(modloader::win::memory::resolve_rva(0x0477D400));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState__Class>(type_info(), "", "PetrifiedOwlBossJumpAndSlamBehaviour", "JumpState");
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState>(get_class());
        }
    } // namespace PetrifiedOwlBossJumpAndSlamBehaviour_JumpState
} // namespace app::classes::types
