#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightArena2Behaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLowFlightArena2Behaviour__Class** type_info;
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLowFlightArena2Behaviour__Class>(type_info, "", "PetrifiedOwlBossLowFlightArena2Behaviour");
        }
        inline app::PetrifiedOwlBossLowFlightArena2Behaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightArena2Behaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightArena2Behaviour
} // namespace app::classes::types
