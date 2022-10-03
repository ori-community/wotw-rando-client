#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_StompState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class** type_info;
        inline app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "StompState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_StompState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_StompState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_StompState
} // namespace app::classes::types
