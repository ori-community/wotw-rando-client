#pragma once
#include <Modloader/app/structs/FishingMiniGameController_ExitingState.h>
#include <Modloader/app/structs/FishingMiniGameController_ExitingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishingMiniGameController_ExitingState {
        inline app::FishingMiniGameController_ExitingState__Class** type_info() {
            static app::FishingMiniGameController_ExitingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FishingMiniGameController_ExitingState__Class**)(modloader::win::memory::resolve_rva(0x04781B80));
            }
            return cache;
        }
        inline app::FishingMiniGameController_ExitingState__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_ExitingState__Class>(type_info(), "", "FishingMiniGameController", "ExitingState");
        }
        inline app::FishingMiniGameController_ExitingState* create() {
            return il2cpp::create_object<app::FishingMiniGameController_ExitingState>(get_class());
        }
    } // namespace FishingMiniGameController_ExitingState
} // namespace app::classes::types
