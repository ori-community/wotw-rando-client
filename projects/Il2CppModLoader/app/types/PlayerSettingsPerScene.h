#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerSettingsPerScene {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerSettingsPerScene__Class** type_info;
        inline app::PlayerSettingsPerScene__Class* get_class() {
            return il2cpp::get_class<app::PlayerSettingsPerScene__Class>(type_info, "", "PlayerSettingsPerScene");
        }
        inline app::PlayerSettingsPerScene* create() {
            return il2cpp::create_object<app::PlayerSettingsPerScene>(get_class());
        }
    } // namespace PlayerSettingsPerScene
} // namespace app::classes::types
