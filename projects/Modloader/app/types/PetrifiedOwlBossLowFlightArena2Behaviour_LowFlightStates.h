#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates {
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Class** type_info() {
            static app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Class**)(modloader::win::memory::resolve_rva(0x04742DB0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Class>(type_info(), "", "PetrifiedOwlBossLowFlightArena2Behaviour", "LowFlightStates");
        }
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates
} // namespace app::classes::types
