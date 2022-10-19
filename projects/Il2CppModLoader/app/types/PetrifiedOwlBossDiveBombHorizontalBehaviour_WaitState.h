#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState {
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class** type_info = (app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class**)(modloader::win::memory::resolve_rva(0x047233C0));
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class>(type_info, "", "PetrifiedOwlBossDiveBombHorizontalBehaviour", "WaitState");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState
} // namespace app::classes::types
