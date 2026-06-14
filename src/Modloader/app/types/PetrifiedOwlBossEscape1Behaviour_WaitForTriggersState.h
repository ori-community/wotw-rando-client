#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState {
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class** type_info() {
            static app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class**)(modloader::win::memory::resolve_rva(0x0476CDF0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class>(type_info(), "", "PetrifiedOwlBossEscape1Behaviour", "WaitForTriggersState");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState
} // namespace app::classes::types
