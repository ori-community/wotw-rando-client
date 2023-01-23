#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_LowFlightStates.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour_LowFlightStates {
        inline app::PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Class** type_info = (app::PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Class**)(modloader::win::memory::resolve_rva(0x0475CF98));
        inline app::PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Class>(type_info, "", "PetrifiedOwlBossLowFlightBehaviour", "LowFlightStates");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_LowFlightStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour_LowFlightStates>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour_LowFlightStates
} // namespace app::classes::types
