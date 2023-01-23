#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState {
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState__Class** type_info = (app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState__Class**)(modloader::win::memory::resolve_rva(0x04758620));
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "DiveHorizontalState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState
} // namespace app::classes::types
