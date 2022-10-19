#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_StompState {
        inline app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class** type_info = (app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class**)(modloader::win::memory::resolve_rva(0x04787360));
        inline app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_StompState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "StompState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_StompState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_StompState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_StompState
} // namespace app::classes::types
