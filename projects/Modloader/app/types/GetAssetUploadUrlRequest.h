#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetAssetUploadUrlRequest__Class.h>
#include <Modloader/app/structs/GetAssetUploadUrlRequest.h>

namespace app::classes::types {
    namespace GetAssetUploadUrlRequest {
        inline app::GetAssetUploadUrlRequest__Class** type_info = (app::GetAssetUploadUrlRequest__Class**)(modloader::win::memory::resolve_rva(0x04703040));
        inline app::GetAssetUploadUrlRequest__Class* get_class() {
            return il2cpp::get_class<app::GetAssetUploadUrlRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetAssetUploadUrlRequest");
        }
        inline app::GetAssetUploadUrlRequest* create() {
            return il2cpp::create_object<app::GetAssetUploadUrlRequest>(get_class());
        }
    } // namespace GetAssetUploadUrlRequest
} // namespace app::classes::types
