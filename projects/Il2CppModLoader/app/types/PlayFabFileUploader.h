#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabFileUploader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabFileUploader__Class** type_info;
        inline app::PlayFabFileUploader__Class* get_class() {
            return il2cpp::get_class<app::PlayFabFileUploader__Class>(type_info, "SystemIntegration.Races", "PlayFabFileUploader");
        }
        inline app::PlayFabFileUploader* create() {
            return il2cpp::create_object<app::PlayFabFileUploader>(get_class());
        }
    } // namespace PlayFabFileUploader
} // namespace app::classes::types
