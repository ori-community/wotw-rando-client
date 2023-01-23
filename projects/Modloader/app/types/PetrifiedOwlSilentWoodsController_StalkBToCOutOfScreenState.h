#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__Class.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState {
        inline app::PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__Class** type_info = (app::PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__Class**)(modloader::win::memory::resolve_rva(0x04785A78));
        inline app::PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__Class>(type_info, "", "PetrifiedOwlSilentWoodsController", "StalkBToCOutOfScreenState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState
} // namespace app::classes::types
