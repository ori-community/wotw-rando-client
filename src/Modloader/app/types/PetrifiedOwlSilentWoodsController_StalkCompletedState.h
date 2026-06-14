#pragma once
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkCompletedState.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkCompletedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkCompletedState {
        inline app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class** type_info() {
            static app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class**)(modloader::win::memory::resolve_rva(0x047430C8));
            }
            return cache;
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class>(type_info(), "", "PetrifiedOwlSilentWoodsController", "StalkCompletedState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkCompletedState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkCompletedState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkCompletedState
} // namespace app::classes::types
