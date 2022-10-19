#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour_JumpState {
        inline app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class** type_info = (app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class**)(modloader::win::memory::resolve_rva(0x047129D8));
        inline app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class>(type_info, "", "PetrifiedOwlBossLowFlightBehaviour", "JumpState");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_JumpState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour_JumpState>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour_JumpState
} // namespace app::classes::types
