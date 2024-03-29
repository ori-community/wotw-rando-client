#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_JumpState.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_JumpState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour_JumpState {
        inline app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class** type_info() {
            static app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class**)(modloader::win::memory::resolve_rva(0x047129D8));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class>(type_info(), "", "PetrifiedOwlBossLowFlightBehaviour", "JumpState");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_JumpState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour_JumpState>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour_JumpState
} // namespace app::classes::types
