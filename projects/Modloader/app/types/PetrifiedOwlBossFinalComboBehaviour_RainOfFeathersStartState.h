#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState {
        inline app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState__Class** type_info = (app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState__Class**)(modloader::win::memory::resolve_rva(0x04736170));
        inline app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "RainOfFeathersStartState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState
} // namespace app::classes::types
