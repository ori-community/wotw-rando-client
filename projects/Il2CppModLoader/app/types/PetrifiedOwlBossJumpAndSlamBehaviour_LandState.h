#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossJumpAndSlamBehaviour_LandState {
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState__Class** type_info = (app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState__Class**)(modloader::win::memory::resolve_rva(0x04780F68));
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState__Class>(type_info, "", "PetrifiedOwlBossJumpAndSlamBehaviour", "LandState");
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossJumpAndSlamBehaviour_LandState>(get_class());
        }
    } // namespace PetrifiedOwlBossJumpAndSlamBehaviour_LandState
} // namespace app::classes::types
