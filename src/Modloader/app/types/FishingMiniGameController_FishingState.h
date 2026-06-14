#pragma once
#include <Modloader/app/structs/FishingMiniGameController_FishingState.h>
#include <Modloader/app/structs/FishingMiniGameController_FishingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishingMiniGameController_FishingState {
        inline app::FishingMiniGameController_FishingState__Class** type_info() {
            static app::FishingMiniGameController_FishingState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FishingMiniGameController_FishingState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FishingMiniGameController_FishingState__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_FishingState__Class>(type_info(), "", "FishingMiniGameController", "FishingState");
        }
        inline app::FishingMiniGameController_FishingState* create() {
            return il2cpp::create_object<app::FishingMiniGameController_FishingState>(get_class());
        }
    } // namespace FishingMiniGameController_FishingState
} // namespace app::classes::types
