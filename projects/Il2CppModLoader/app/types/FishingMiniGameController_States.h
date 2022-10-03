#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishingMiniGameController_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishingMiniGameController_States__Class** type_info;
        inline app::FishingMiniGameController_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FishingMiniGameController_States__Class>(type_info, "", "FishingMiniGameController", "States");
        }
        inline app::FishingMiniGameController_States* create() {
            return il2cpp::create_object<app::FishingMiniGameController_States>(get_class());
        }
    } // namespace FishingMiniGameController_States
} // namespace app::classes::types
