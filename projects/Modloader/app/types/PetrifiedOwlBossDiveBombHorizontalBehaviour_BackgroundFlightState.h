#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState {
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class** type_info() {
            static app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class**)(modloader::win::memory::resolve_rva(0x0476B1F0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class>(type_info(), "", "PetrifiedOwlBossDiveBombHorizontalBehaviour", "BackgroundFlightState");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState
} // namespace app::classes::types
