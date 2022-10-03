#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_SwoopState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFinalComboBehaviour_SwoopState__Class** type_info;
        inline app::PetrifiedOwlBossFinalComboBehaviour_SwoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_SwoopState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "SwoopState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_SwoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_SwoopState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_SwoopState
} // namespace app::classes::types
