#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightArena2Behaviour {
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour__Class** type_info() {
            static app::PetrifiedOwlBossLowFlightArena2Behaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLowFlightArena2Behaviour__Class**)(modloader::win::memory::resolve_rva(0x0476C948));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLowFlightArena2Behaviour__Class>(type_info(), "", "PetrifiedOwlBossLowFlightArena2Behaviour");
        }
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightArena2Behaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightArena2Behaviour
} // namespace app::classes::types
