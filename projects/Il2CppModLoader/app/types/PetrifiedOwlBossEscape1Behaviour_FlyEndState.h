#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_FlyEndState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossEscape1Behaviour_FlyEndState__Class** type_info;
        inline app::PetrifiedOwlBossEscape1Behaviour_FlyEndState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_FlyEndState__Class>(type_info, "", "PetrifiedOwlBossEscape1Behaviour", "FlyEndState");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_FlyEndState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_FlyEndState>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_FlyEndState
} // namespace app::classes::types
