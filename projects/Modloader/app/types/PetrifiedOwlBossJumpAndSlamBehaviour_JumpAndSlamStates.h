#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates {
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates__Class** type_info = (app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates__Class**)(modloader::win::memory::resolve_rva(0x04753388));
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates__Class>(type_info, "", "PetrifiedOwlBossJumpAndSlamBehaviour", "JumpAndSlamStates");
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates>(get_class());
        }
    } // namespace PetrifiedOwlBossJumpAndSlamBehaviour_JumpAndSlamStates
} // namespace app::classes::types
