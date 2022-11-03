#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossRainOfFeathersBehaviour_EndState {
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class** type_info = (app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class**)(modloader::win::memory::resolve_rva(0x0470EE28));
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class>(type_info, "", "PetrifiedOwlBossRainOfFeathersBehaviour", "EndState");
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState>(get_class());
        }
    } // namespace PetrifiedOwlBossRainOfFeathersBehaviour_EndState
} // namespace app::classes::types
