#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UploadCertificateRequest {
        inline app::UploadCertificateRequest__Class** type_info = (app::UploadCertificateRequest__Class**)(modloader::win::memory::resolve_rva(0x0477E3D8));
        inline app::UploadCertificateRequest__Class* get_class() {
            return il2cpp::get_class<app::UploadCertificateRequest__Class>(type_info, "PlayFab.MultiplayerModels", "UploadCertificateRequest");
        }
        inline app::UploadCertificateRequest* create() {
            return il2cpp::create_object<app::UploadCertificateRequest>(get_class());
        }
    } // namespace UploadCertificateRequest
} // namespace app::classes::types
