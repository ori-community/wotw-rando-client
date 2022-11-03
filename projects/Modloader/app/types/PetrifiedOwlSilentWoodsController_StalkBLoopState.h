#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkBLoopState {
        inline app::PetrifiedOwlSilentWoodsController_StalkBLoopState__Class** type_info = (app::PetrifiedOwlSilentWoodsController_StalkBLoopState__Class**)(modloader::win::memory::resolve_rva(0x0472AB70));
        inline app::PetrifiedOwlSilentWoodsController_StalkBLoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkBLoopState__Class>(type_info, "", "PetrifiedOwlSilentWoodsController", "StalkBLoopState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkBLoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkBLoopState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkBLoopState
} // namespace app::classes::types
