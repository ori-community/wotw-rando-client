#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_WaitState {
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitState__Class** type_info = (app::PetrifiedOwlBossEscape1Behaviour_WaitState__Class**)(modloader::win::memory::resolve_rva(0x04773528));
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_WaitState__Class>(type_info, "", "PetrifiedOwlBossEscape1Behaviour", "WaitState");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_WaitState>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_WaitState
} // namespace app::classes::types
