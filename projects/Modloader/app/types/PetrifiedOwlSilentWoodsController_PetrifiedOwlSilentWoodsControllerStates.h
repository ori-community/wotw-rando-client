#pragma once
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates {
        inline app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Class** type_info() {
            static app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Class**)(modloader::win::memory::resolve_rva(0x047820F8));
            }
            return cache;
        }
        inline app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Class>(type_info(), "", "PetrifiedOwlSilentWoodsController", "PetrifiedOwlSilentWoodsControllerStates");
        }
        inline app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates
} // namespace app::classes::types
