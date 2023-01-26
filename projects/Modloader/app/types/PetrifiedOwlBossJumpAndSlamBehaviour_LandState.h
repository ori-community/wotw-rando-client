#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour_LandState.h>
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour_LandState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossJumpAndSlamBehaviour_LandState {
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState__Class** type_info() {
            static app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState__Class**)(modloader::win::memory::resolve_rva(0x04780F68));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState__Class>(type_info(), "", "PetrifiedOwlBossJumpAndSlamBehaviour", "LandState");
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState>(get_class());
        }
    } // namespace PetrifiedOwlBossJumpAndSlamBehaviour_LandState
} // namespace app::classes::types
