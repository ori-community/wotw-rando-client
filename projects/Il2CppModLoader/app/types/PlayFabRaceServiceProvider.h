#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabRaceServiceProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabRaceServiceProvider__Class** type_info;
        inline app::PlayFabRaceServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::PlayFabRaceServiceProvider__Class>(type_info, "SystemIntegration.Races", "PlayFabRaceServiceProvider");
        }
        inline app::PlayFabRaceServiceProvider* create() {
            return il2cpp::create_object<app::PlayFabRaceServiceProvider>(get_class());
        }
    } // namespace PlayFabRaceServiceProvider
} // namespace app::classes::types
