#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_FinalComboStates.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_FinalComboStates {
        inline app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class** type_info() {
            static app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class**)(modloader::win::memory::resolve_rva(0x04791D88));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates__Class>(type_info(), "", "PetrifiedOwlBossFinalComboBehaviour", "FinalComboStates");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_FinalComboStates>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_FinalComboStates
} // namespace app::classes::types
