#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState {
        inline app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState__Class** type_info = (app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState__Class**)(modloader::win::memory::resolve_rva(0x0472AD70));
        inline app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "RainOfFeathersLoopState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState
} // namespace app::classes::types
