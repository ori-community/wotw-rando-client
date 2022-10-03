#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UploadCertificateRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UploadCertificateRequest__Class** type_info;
        inline app::UploadCertificateRequest__Class* get_class() {
            return il2cpp::get_class<app::UploadCertificateRequest__Class>(type_info, "PlayFab.MultiplayerModels", "UploadCertificateRequest");
        }
        inline app::UploadCertificateRequest* create() {
            return il2cpp::create_object<app::UploadCertificateRequest>(get_class());
        }
    } // namespace UploadCertificateRequest
} // namespace app::classes::types
