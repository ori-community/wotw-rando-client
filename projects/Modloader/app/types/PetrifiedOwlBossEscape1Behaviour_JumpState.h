#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_JumpState {
        inline app::PetrifiedOwlBossEscape1Behaviour_JumpState__Class** type_info = (app::PetrifiedOwlBossEscape1Behaviour_JumpState__Class**)(modloader::win::memory::resolve_rva(0x0474DD48));
        inline app::PetrifiedOwlBossEscape1Behaviour_JumpState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_JumpState__Class>(type_info, "", "PetrifiedOwlBossEscape1Behaviour", "JumpState");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_JumpState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_JumpState>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_JumpState
} // namespace app::classes::types
