#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates {
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates__Class** type_info = (app::PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates__Class**)(modloader::win::memory::resolve_rva(0x0476F290));
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates__Class>(type_info, "", "PetrifiedOwlBossDiveBombHorizontalBehaviour", "DiveBombHorizontalStates");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates
} // namespace app::classes::types
