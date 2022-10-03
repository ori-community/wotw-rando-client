#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishingMiniGameController_ExitingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishingMiniGameController_ExitingState__Class** type_info;
        inline app::FishingMiniGameController_ExitingState__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_ExitingState__Class>(type_info, "", "FishingMiniGameController", "ExitingState");
        }
        inline app::FishingMiniGameController_ExitingState* create() {
            return il2cpp::create_object<app::FishingMiniGameController_ExitingState>(get_class());
        }
    } // namespace FishingMiniGameController_ExitingState
} // namespace app::classes::types
