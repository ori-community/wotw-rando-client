#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetAssetUploadUrlResponse {
        inline app::GetAssetUploadUrlResponse__Class** type_info = (app::GetAssetUploadUrlResponse__Class**)(modloader::win::memory::resolve_rva(0x0470B298));
        inline app::GetAssetUploadUrlResponse__Class* get_class() {
            return il2cpp::get_class<app::GetAssetUploadUrlResponse__Class>(type_info, "PlayFab.MultiplayerModels", "GetAssetUploadUrlResponse");
        }
        inline app::GetAssetUploadUrlResponse* create() {
            return il2cpp::create_object<app::GetAssetUploadUrlResponse>(get_class());
        }
    } // namespace GetAssetUploadUrlResponse
} // namespace app::classes::types
