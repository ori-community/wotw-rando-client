#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersEndState {
        inline app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersEndState__Class** type_info = (app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersEndState__Class**)(modloader::win::memory::resolve_rva(0x047471D0));
        inline app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersEndState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersEndState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "RainOfFeathersEndState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersEndState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersEndState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersEndState
} // namespace app::classes::types
