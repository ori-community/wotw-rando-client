#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Class** type_info;
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Class>(type_info, "", "PetrifiedOwlBossLowFlightArena2Behaviour", "LowFlightStates");
        }
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates
} // namespace app::classes::types
