#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState {
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__Class** type_info() {
            static app::PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__Class**)(modloader::win::memory::resolve_rva(0x0478FD48));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__Class>(type_info(), "", "PetrifiedOwlBossDiveBombVerticalBehaviour", "BackgroundFlightState");
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState
} // namespace app::classes::types
