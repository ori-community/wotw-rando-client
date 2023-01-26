#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour_LoopState.h>
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossRainOfFeathersBehaviour_LoopState {
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Class** type_info() {
            static app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Class**)(modloader::win::memory::resolve_rva(0x0476CD10));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Class>(type_info(), "", "PetrifiedOwlBossRainOfFeathersBehaviour", "LoopState");
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState>(get_class());
        }
    } // namespace PetrifiedOwlBossRainOfFeathersBehaviour_LoopState
} // namespace app::classes::types
