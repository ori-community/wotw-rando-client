#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_StompState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_StompState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_StompState {
        inline app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class** type_info() {
            static app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class**)(modloader::win::memory::resolve_rva(0x04787360));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class>(type_info(), "", "PetrifiedOwlBossFinalComboBehaviour", "StompState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_StompState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_StompState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_StompState
} // namespace app::classes::types
