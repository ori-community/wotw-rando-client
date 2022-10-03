#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour_StartState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossTripleSlamBehaviour_StartState__Class** type_info;
        inline app::PetrifiedOwlBossTripleSlamBehaviour_StartState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossTripleSlamBehaviour_StartState__Class>(type_info, "", "PetrifiedOwlBossTripleSlamBehaviour", "StartState");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_StartState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour_StartState>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour_StartState
} // namespace app::classes::types
