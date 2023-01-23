#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState {
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class** type_info = (app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class**)(modloader::win::memory::resolve_rva(0x047191B8));
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class>(type_info, "", "PetrifiedOwlBossDiveBombVerticalBehaviour", "PostAttackState");
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState
} // namespace app::classes::types
