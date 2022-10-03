#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour_AirState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class** type_info;
        inline app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightBehaviour_AirState__Class>(type_info, "", "PetrifiedOwlBossLowFlightBehaviour", "AirState");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_AirState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour_AirState>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour_AirState
} // namespace app::classes::types
