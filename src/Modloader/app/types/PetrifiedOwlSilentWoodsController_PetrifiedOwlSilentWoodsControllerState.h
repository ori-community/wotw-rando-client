#pragma once
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState {
        inline app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Class** type_info() {
            static app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState__Class>(type_info(), "", "PetrifiedOwlSilentWoodsController", "PetrifiedOwlSilentWoodsControllerState");
        }
        inline app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState
} // namespace app::classes::types
