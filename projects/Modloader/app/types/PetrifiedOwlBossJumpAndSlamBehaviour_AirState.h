#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour_AirState.h>
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossJumpAndSlamBehaviour_AirState {
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class** type_info() {
            static app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class**)(modloader::win::memory::resolve_rva(0x04796998));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class>(type_info(), "", "PetrifiedOwlBossJumpAndSlamBehaviour", "AirState");
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState>(get_class());
        }
    } // namespace PetrifiedOwlBossJumpAndSlamBehaviour_AirState
} // namespace app::classes::types
