#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState {
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class** type_info = (app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class**)(modloader::win::memory::resolve_rva(0x0476CDF0));
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class>(type_info, "", "PetrifiedOwlBossEscape1Behaviour", "WaitForTriggersState");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState
} // namespace app::classes::types
