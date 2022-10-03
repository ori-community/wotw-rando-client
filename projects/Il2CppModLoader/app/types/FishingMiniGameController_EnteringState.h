#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishingMiniGameController_EnteringState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishingMiniGameController_EnteringState__Class** type_info;
        inline app::FishingMiniGameController_EnteringState__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_EnteringState__Class>(type_info, "", "FishingMiniGameController", "EnteringState");
        }
        inline app::FishingMiniGameController_EnteringState* create() {
            return il2cpp::create_object<app::FishingMiniGameController_EnteringState>(get_class());
        }
    } // namespace FishingMiniGameController_EnteringState
} // namespace app::classes::types
