#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_FinalComboStates.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_FinalComboStates {
        inline app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class** type_info = (app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class**)(modloader::win::memory::resolve_rva(0x04791D88));
        inline app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "FinalComboStates");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_FinalComboStates
} // namespace app::classes::types
