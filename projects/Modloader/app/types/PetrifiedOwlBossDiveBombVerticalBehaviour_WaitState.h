#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState {
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__Class** type_info = (app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__Class**)(modloader::win::memory::resolve_rva(0x0472F2C8));
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__Class>(type_info, "", "PetrifiedOwlBossDiveBombVerticalBehaviour", "WaitState");
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState
} // namespace app::classes::types
