#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState {
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class** type_info() {
            static app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class**)(modloader::win::memory::resolve_rva(0x047191B8));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class>(type_info(), "", "PetrifiedOwlBossDiveBombVerticalBehaviour", "PostAttackState");
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState
} // namespace app::classes::types
