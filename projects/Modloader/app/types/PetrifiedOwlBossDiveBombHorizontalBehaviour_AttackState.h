#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState {
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class** type_info() {
            static app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class**)(modloader::win::memory::resolve_rva(0x04720CB0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class>(type_info(), "", "PetrifiedOwlBossDiveBombHorizontalBehaviour", "AttackState");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState
} // namespace app::classes::types
