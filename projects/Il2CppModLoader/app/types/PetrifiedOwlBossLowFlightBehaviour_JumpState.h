#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour_JumpState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class** type_info;
        inline app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLowFlightBehaviour_JumpState__Class>(type_info, "", "PetrifiedOwlBossLowFlightBehaviour", "JumpState");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour_JumpState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour_JumpState>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour_JumpState
} // namespace app::classes::types
