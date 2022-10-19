#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameController_GameModeBalanceSettings {
        namespace {
            inline app::GameController_GameModeBalanceSettings__Class* type_info_ref = nullptr;
        }
        inline app::GameController_GameModeBalanceSettings__Class** type_info = &type_info_ref;
        inline app::GameController_GameModeBalanceSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_GameModeBalanceSettings__Class>(type_info, "", "GameController", "GameModeBalanceSettings");
        }
        inline app::GameController_GameModeBalanceSettings* create() {
            return il2cpp::create_object<app::GameController_GameModeBalanceSettings>(get_class());
        }
    } // namespace GameController_GameModeBalanceSettings
} // namespace app::classes::types
