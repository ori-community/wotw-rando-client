#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_FlyStartState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossEscape1Behaviour_FlyStartState__Class** type_info;
        inline app::PetrifiedOwlBossEscape1Behaviour_FlyStartState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_FlyStartState__Class>(type_info, "", "PetrifiedOwlBossEscape1Behaviour", "FlyStartState");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_FlyStartState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_FlyStartState>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_FlyStartState
} // namespace app::classes::types
