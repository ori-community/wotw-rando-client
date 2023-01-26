#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour_EndState.h>
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossRainOfFeathersBehaviour_EndState {
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class** type_info() {
            static app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class**)(modloader::win::memory::resolve_rva(0x0470EE28));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class>(type_info(), "", "PetrifiedOwlBossRainOfFeathersBehaviour", "EndState");
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState>(get_class());
        }
    } // namespace PetrifiedOwlBossRainOfFeathersBehaviour_EndState
} // namespace app::classes::types
