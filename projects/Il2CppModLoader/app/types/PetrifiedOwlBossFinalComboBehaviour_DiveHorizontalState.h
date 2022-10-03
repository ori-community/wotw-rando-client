#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState__Class** type_info;
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "DiveHorizontalState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState
} // namespace app::classes::types
