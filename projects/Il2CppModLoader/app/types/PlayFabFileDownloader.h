#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabFileDownloader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabFileDownloader__Class** type_info;
        inline app::PlayFabFileDownloader__Class* get_class() {
            return il2cpp::get_class<app::PlayFabFileDownloader__Class>(type_info, "SystemIntegration.Races", "PlayFabFileDownloader");
        }
        inline app::PlayFabFileDownloader* create() {
            return il2cpp::create_object<app::PlayFabFileDownloader>(get_class());
        }
    } // namespace PlayFabFileDownloader
} // namespace app::classes::types
