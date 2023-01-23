#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_DiveLaserState__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_DiveLaserState.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_DiveLaserState {
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState__Class** type_info = (app::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState__Class**)(modloader::win::memory::resolve_rva(0x04767980));
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour", "DiveLaserState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_DiveLaserState
} // namespace app::classes::types
