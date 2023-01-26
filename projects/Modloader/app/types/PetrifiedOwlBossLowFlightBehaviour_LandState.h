#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_LandState.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_LandState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour_LandState {
        inline app::PetrifiedOwlBossLowFlightBehaviour_LandState__Class** type_info() {
            static app::PetrifiedOwlBossLowFlightBehaviour_LandState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLowFlightBehaviour_LandState__Class**)(modloader::win::memory::resolve_rva(0x047146A8));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_LandState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightBehaviour_LandState__Class>(type_info(), "", "PetrifiedOwlBossLowFlightBehaviour", "LandState");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_LandState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour_LandState>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour_LandState
} // namespace app::classes::types
