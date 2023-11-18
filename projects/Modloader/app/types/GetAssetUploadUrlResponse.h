#pragma once
#include <Modloader/app/structs/GetAssetUploadUrlResponse.h>
#include <Modloader/app/structs/GetAssetUploadUrlResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetAssetUploadUrlResponse {
        inline app::GetAssetUploadUrlResponse__Class** type_info() {
            static app::GetAssetUploadUrlResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetAssetUploadUrlResponse__Class**)(modloader::win::memory::resolve_rva(0x0470B298));
            }
            return cache;
        }
        inline app::GetAssetUploadUrlResponse__Class* get_class() {
            return il2cpp::get_class<app::GetAssetUploadUrlResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "GetAssetUploadUrlResponse");
        }
        inline app::GetAssetUploadUrlResponse* create() {
            return il2cpp::create_object<app::GetAssetUploadUrlResponse>(get_class());
        }
    } // namespace GetAssetUploadUrlResponse
} // namespace app::classes::types
