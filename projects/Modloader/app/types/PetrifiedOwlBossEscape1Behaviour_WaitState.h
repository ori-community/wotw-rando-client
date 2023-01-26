#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_WaitState.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_WaitState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_WaitState {
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitState__Class** type_info() {
            static app::PetrifiedOwlBossEscape1Behaviour_WaitState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossEscape1Behaviour_WaitState__Class**)(modloader::win::memory::resolve_rva(0x04773528));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_WaitState__Class>(type_info(), "", "PetrifiedOwlBossEscape1Behaviour", "WaitState");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_WaitState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_WaitState>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_WaitState
} // namespace app::classes::types
