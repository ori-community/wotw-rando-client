#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_FinalComboStates {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class** type_info;
        inline app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "FinalComboStates");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_FinalComboStates
} // namespace app::classes::types
