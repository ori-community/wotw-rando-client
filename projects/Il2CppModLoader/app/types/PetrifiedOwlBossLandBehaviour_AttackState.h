#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLandBehaviour_AttackState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLandBehaviour_AttackState__Class** type_info;
        inline app::PetrifiedOwlBossLandBehaviour_AttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLandBehaviour_AttackState__Class>(type_info, "", "PetrifiedOwlBossLandBehaviour", "AttackState");
        }
        inline app::PetrifiedOwlBossLandBehaviour_AttackState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLandBehaviour_AttackState>(get_class());
        }
    } // namespace PetrifiedOwlBossLandBehaviour_AttackState
} // namespace app::classes::types
