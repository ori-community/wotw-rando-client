#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossRainOfFeathersBehaviour_EndState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class** type_info;
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class>(type_info, "", "PetrifiedOwlBossRainOfFeathersBehaviour", "EndState");
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState>(get_class());
        }
    } // namespace PetrifiedOwlBossRainOfFeathersBehaviour_EndState
} // namespace app::classes::types
