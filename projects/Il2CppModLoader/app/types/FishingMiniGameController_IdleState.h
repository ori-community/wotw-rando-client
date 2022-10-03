#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishingMiniGameController_IdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishingMiniGameController_IdleState__Class** type_info;
        inline app::FishingMiniGameController_IdleState__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_IdleState__Class>(type_info, "", "FishingMiniGameController", "IdleState");
        }
        inline app::FishingMiniGameController_IdleState* create() {
            return il2cpp::create_object<app::FishingMiniGameController_IdleState>(get_class());
        }
    } // namespace FishingMiniGameController_IdleState
} // namespace app::classes::types
