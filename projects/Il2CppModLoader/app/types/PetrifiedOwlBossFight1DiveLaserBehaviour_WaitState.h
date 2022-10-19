#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1DiveLaserBehaviour_WaitState {
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_WaitState__Class** type_info = (app::PetrifiedOwlBossFight1DiveLaserBehaviour_WaitState__Class**)(modloader::win::memory::resolve_rva(0x04773C98));
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_WaitState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFight1DiveLaserBehaviour_WaitState__Class>(type_info, "", "PetrifiedOwlBossFight1DiveLaserBehaviour", "WaitState");
        }
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_WaitState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1DiveLaserBehaviour_WaitState>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1DiveLaserBehaviour_WaitState
} // namespace app::classes::types
