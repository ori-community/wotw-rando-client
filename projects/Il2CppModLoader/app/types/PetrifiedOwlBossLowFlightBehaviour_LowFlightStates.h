#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour_LowFlightStates {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Class** type_info;
        inline app::PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Class>(type_info, "", "PetrifiedOwlBossLowFlightBehaviour", "LowFlightStates");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_LowFlightStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour_LowFlightStates>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour_LowFlightStates
} // namespace app::classes::types
