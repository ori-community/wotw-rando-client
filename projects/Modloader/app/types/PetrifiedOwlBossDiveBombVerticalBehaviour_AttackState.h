#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState {
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__Class** type_info = (app::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__Class**)(modloader::win::memory::resolve_rva(0x04785D38));
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__Class>(type_info, "", "PetrifiedOwlBossDiveBombVerticalBehaviour", "AttackState");
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState
} // namespace app::classes::types
