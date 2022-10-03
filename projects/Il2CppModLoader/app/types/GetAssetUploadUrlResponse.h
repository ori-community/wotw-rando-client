#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetAssetUploadUrlResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetAssetUploadUrlResponse__Class** type_info;
        inline app::GetAssetUploadUrlResponse__Class* get_class() {
            return il2cpp::get_class<app::GetAssetUploadUrlResponse__Class>(type_info, "PlayFab.MultiplayerModels", "GetAssetUploadUrlResponse");
        }
        inline app::GetAssetUploadUrlResponse* create() {
            return il2cpp::create_object<app::GetAssetUploadUrlResponse>(get_class());
        }
    } // namespace GetAssetUploadUrlResponse
} // namespace app::classes::types
