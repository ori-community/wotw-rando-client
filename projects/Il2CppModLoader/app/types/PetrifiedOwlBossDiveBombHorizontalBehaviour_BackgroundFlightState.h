#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState {
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class** type_info = (app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class**)(modloader::win::memory::resolve_rva(0x0476B1F0));
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class>(type_info, "", "PetrifiedOwlBossDiveBombHorizontalBehaviour", "BackgroundFlightState");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState
} // namespace app::classes::types
