#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState {
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class** type_info = (app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class**)(modloader::win::memory::resolve_rva(0x04720CB0));
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class>(type_info, "", "PetrifiedOwlBossDiveBombHorizontalBehaviour", "AttackState");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState
} // namespace app::classes::types
