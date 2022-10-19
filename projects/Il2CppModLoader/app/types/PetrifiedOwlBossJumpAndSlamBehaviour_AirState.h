#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossJumpAndSlamBehaviour_AirState {
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class** type_info = (app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class**)(modloader::win::memory::resolve_rva(0x04796998));
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState__Class>(type_info, "", "PetrifiedOwlBossJumpAndSlamBehaviour", "AirState");
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState>(get_class());
        }
    } // namespace PetrifiedOwlBossJumpAndSlamBehaviour_AirState
} // namespace app::classes::types
