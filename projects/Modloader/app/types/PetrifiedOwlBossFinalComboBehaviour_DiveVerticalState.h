#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState {
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState__Class** type_info = (app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState__Class**)(modloader::win::memory::resolve_rva(0x04765B78));
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "DiveVerticalState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState
} // namespace app::classes::types
