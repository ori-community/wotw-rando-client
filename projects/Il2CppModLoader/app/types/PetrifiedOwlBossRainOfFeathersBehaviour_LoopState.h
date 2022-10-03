#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossRainOfFeathersBehaviour_LoopState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Class** type_info;
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Class>(type_info, "", "PetrifiedOwlBossRainOfFeathersBehaviour", "LoopState");
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState>(get_class());
        }
    } // namespace PetrifiedOwlBossRainOfFeathersBehaviour_LoopState
} // namespace app::classes::types
