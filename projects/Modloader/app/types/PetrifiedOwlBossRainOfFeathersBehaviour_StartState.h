#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour_StartState.h>
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour_StartState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossRainOfFeathersBehaviour_StartState {
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_StartState__Class** type_info() {
            static app::PetrifiedOwlBossRainOfFeathersBehaviour_StartState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossRainOfFeathersBehaviour_StartState__Class**)(modloader::win::memory::resolve_rva(0x04770A08));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_StartState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossRainOfFeathersBehaviour_StartState__Class>(type_info(), "", "PetrifiedOwlBossRainOfFeathersBehaviour", "StartState");
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_StartState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossRainOfFeathersBehaviour_StartState>(get_class());
        }
    } // namespace PetrifiedOwlBossRainOfFeathersBehaviour_StartState
} // namespace app::classes::types
