#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightArena2Behaviour {
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour__Class** type_info = (app::PetrifiedOwlBossLowFlightArena2Behaviour__Class**)(modloader::win::memory::resolve_rva(0x0476C948));
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLowFlightArena2Behaviour__Class>(type_info, "", "PetrifiedOwlBossLowFlightArena2Behaviour");
        }
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightArena2Behaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightArena2Behaviour
} // namespace app::classes::types
