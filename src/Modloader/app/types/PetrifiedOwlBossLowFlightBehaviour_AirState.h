#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_AirState.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_AirState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour_AirState {
        inline app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class** type_info() {
            static app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class**)(modloader::win::memory::resolve_rva(0x0473B360));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class>(type_info(), "", "PetrifiedOwlBossLowFlightBehaviour", "AirState");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_AirState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour_AirState>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour_AirState
} // namespace app::classes::types
