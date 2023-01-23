#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour_AirState.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightArena2Behaviour_AirState {
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Class** type_info = (app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Class**)(modloader::win::memory::resolve_rva(0x04737D60));
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Class>(type_info, "", "PetrifiedOwlBossLowFlightArena2Behaviour", "AirState");
        }
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightArena2Behaviour_AirState
} // namespace app::classes::types
