#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState {
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__Class** type_info = (app::PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__Class**)(modloader::win::memory::resolve_rva(0x0477E0D0));
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__Class>(type_info, "", "PetrifiedOwlBossDiveBombHorizontalBehaviour", "PostAttackState");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState
} // namespace app::classes::types
