#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetContentDownloadUrlRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetContentDownloadUrlRequest__Class** type_info;
        inline app::GetContentDownloadUrlRequest__Class* get_class() {
            return il2cpp::get_class<app::GetContentDownloadUrlRequest__Class>(type_info, "PlayFab.ClientModels", "GetContentDownloadUrlRequest");
        }
        inline app::GetContentDownloadUrlRequest* create() {
            return il2cpp::create_object<app::GetContentDownloadUrlRequest>(get_class());
        }
    } // namespace GetContentDownloadUrlRequest
} // namespace app::classes::types
