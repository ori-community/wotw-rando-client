#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class** type_info;
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class>(type_info, "", "PetrifiedOwlBossDiveBombHorizontalBehaviour", "AttackState");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState
} // namespace app::classes::types
