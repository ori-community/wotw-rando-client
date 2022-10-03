#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState__Class** type_info;
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "DiveVerticalState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState
} // namespace app::classes::types
