#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FishingMiniGameController_FishingState {
        namespace {
            inline app::FishingMiniGameController_FishingState__Class* type_info_ref = nullptr;
        }
        inline app::FishingMiniGameController_FishingState__Class** type_info = &type_info_ref;
        inline app::FishingMiniGameController_FishingState__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_FishingState__Class>(type_info, "", "FishingMiniGameController", "FishingState");
        }
        inline app::FishingMiniGameController_FishingState* create() {
            return il2cpp::create_object<app::FishingMiniGameController_FishingState>(get_class());
        }
    } // namespace FishingMiniGameController_FishingState
} // namespace app::classes::types
