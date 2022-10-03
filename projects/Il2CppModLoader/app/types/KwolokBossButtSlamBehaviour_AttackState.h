#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour_AttackState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossButtSlamBehaviour_AttackState__Class** type_info;
        inline app::KwolokBossButtSlamBehaviour_AttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossButtSlamBehaviour_AttackState__Class>(type_info, "", "KwolokBossButtSlamBehaviour", "AttackState");
        }
        inline app::KwolokBossButtSlamBehaviour_AttackState* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour_AttackState>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour_AttackState
} // namespace app::classes::types
