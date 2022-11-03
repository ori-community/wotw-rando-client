#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkCState {
        inline app::PetrifiedOwlSilentWoodsController_StalkCState__Class** type_info = (app::PetrifiedOwlSilentWoodsController_StalkCState__Class**)(modloader::win::memory::resolve_rva(0x0478E708));
        inline app::PetrifiedOwlSilentWoodsController_StalkCState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkCState__Class>(type_info, "", "PetrifiedOwlSilentWoodsController", "StalkCState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkCState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkCState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkCState
} // namespace app::classes::types
