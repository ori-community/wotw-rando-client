#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishingMiniGameController_FishingLoopState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishingMiniGameController_FishingLoopState__Class** type_info;
        inline app::FishingMiniGameController_FishingLoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_FishingLoopState__Class>(type_info, "", "FishingMiniGameController", "FishingLoopState");
        }
        inline app::FishingMiniGameController_FishingLoopState* create() {
            return il2cpp::create_object<app::FishingMiniGameController_FishingLoopState>(get_class());
        }
    } // namespace FishingMiniGameController_FishingLoopState
} // namespace app::classes::types
