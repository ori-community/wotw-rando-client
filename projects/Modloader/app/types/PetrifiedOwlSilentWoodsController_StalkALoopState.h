#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkALoopState {
        inline app::PetrifiedOwlSilentWoodsController_StalkALoopState__Class** type_info = (app::PetrifiedOwlSilentWoodsController_StalkALoopState__Class**)(modloader::win::memory::resolve_rva(0x0473F928));
        inline app::PetrifiedOwlSilentWoodsController_StalkALoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkALoopState__Class>(type_info, "", "PetrifiedOwlSilentWoodsController", "StalkALoopState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkALoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkALoopState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkALoopState
} // namespace app::classes::types
