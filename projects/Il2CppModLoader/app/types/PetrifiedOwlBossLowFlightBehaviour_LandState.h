#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour_LandState {
        inline app::PetrifiedOwlBossLowFlightBehaviour_LandState__Class** type_info = (app::PetrifiedOwlBossLowFlightBehaviour_LandState__Class**)(modloader::win::memory::resolve_rva(0x047146A8));
        inline app::PetrifiedOwlBossLowFlightBehaviour_LandState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightBehaviour_LandState__Class>(type_info, "", "PetrifiedOwlBossLowFlightBehaviour", "LandState");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_LandState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour_LandState>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour_LandState
} // namespace app::classes::types
