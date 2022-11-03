#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState {
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState__Class** type_info = (app::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState__Class**)(modloader::win::memory::resolve_rva(0x0476CA40));
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState__Class>(type_info, "", "PetrifiedOwlBossFight1DiveLaserBehaviour", "BackgroundFlightState");
        }
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState
} // namespace app::classes::types
