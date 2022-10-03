#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__Class** type_info;
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__Class>(type_info, "", "PetrifiedOwlBossDiveBombVerticalBehaviour", "WaitState");
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState
} // namespace app::classes::types
