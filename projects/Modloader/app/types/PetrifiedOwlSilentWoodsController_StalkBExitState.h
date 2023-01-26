#pragma once
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkBExitState.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkBExitState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkBExitState {
        inline app::PetrifiedOwlSilentWoodsController_StalkBExitState__Class** type_info() {
            static app::PetrifiedOwlSilentWoodsController_StalkBExitState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlSilentWoodsController_StalkBExitState__Class**)(modloader::win::memory::resolve_rva(0x047730A0));
            }
            return cache;
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkBExitState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkBExitState__Class>(type_info(), "", "PetrifiedOwlSilentWoodsController", "StalkBExitState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkBExitState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkBExitState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkBExitState
} // namespace app::classes::types
