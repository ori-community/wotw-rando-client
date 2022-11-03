#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkAToBState {
        inline app::PetrifiedOwlSilentWoodsController_StalkAToBState__Class** type_info = (app::PetrifiedOwlSilentWoodsController_StalkAToBState__Class**)(modloader::win::memory::resolve_rva(0x04748480));
        inline app::PetrifiedOwlSilentWoodsController_StalkAToBState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkAToBState__Class>(type_info, "", "PetrifiedOwlSilentWoodsController", "StalkAToBState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkAToBState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkAToBState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkAToBState
} // namespace app::classes::types
