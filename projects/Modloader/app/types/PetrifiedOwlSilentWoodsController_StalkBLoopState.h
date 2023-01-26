#pragma once
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkBLoopState.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkBLoopState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkBLoopState {
        inline app::PetrifiedOwlSilentWoodsController_StalkBLoopState__Class** type_info() {
            static app::PetrifiedOwlSilentWoodsController_StalkBLoopState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlSilentWoodsController_StalkBLoopState__Class**)(modloader::win::memory::resolve_rva(0x0472AB70));
            }
            return cache;
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkBLoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkBLoopState__Class>(type_info(), "", "PetrifiedOwlSilentWoodsController", "StalkBLoopState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkBLoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkBLoopState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkBLoopState
} // namespace app::classes::types
