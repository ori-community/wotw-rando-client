#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_IntroState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFinalComboBehaviour_IntroState__Class** type_info;
        inline app::PetrifiedOwlBossFinalComboBehaviour_IntroState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_IntroState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "IntroState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_IntroState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_IntroState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_IntroState
} // namespace app::classes::types
