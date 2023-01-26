#pragma once
#include <Modloader/app/structs/GameController_GameModeBalanceSettings.h>
#include <Modloader/app/structs/GameController_GameModeBalanceSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameController_GameModeBalanceSettings {
        inline app::GameController_GameModeBalanceSettings__Class** type_info() {
            static app::GameController_GameModeBalanceSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameController_GameModeBalanceSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameController_GameModeBalanceSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_GameModeBalanceSettings__Class>(type_info(), "", "GameController", "GameModeBalanceSettings");
        }
        inline app::GameController_GameModeBalanceSettings* create() {
            return il2cpp::create_object<app::GameController_GameModeBalanceSettings>(get_class());
        }
    } // namespace GameController_GameModeBalanceSettings
} // namespace app::classes::types
