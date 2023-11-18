#pragma once
#include <Modloader/app/structs/UploadCertificateRequest.h>
#include <Modloader/app/structs/UploadCertificateRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UploadCertificateRequest {
        inline app::UploadCertificateRequest__Class** type_info() {
            static app::UploadCertificateRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UploadCertificateRequest__Class**)(modloader::win::memory::resolve_rva(0x0477E3D8));
            }
            return cache;
        }
        inline app::UploadCertificateRequest__Class* get_class() {
            return il2cpp::get_class<app::UploadCertificateRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "UploadCertificateRequest");
        }
        inline app::UploadCertificateRequest* create() {
            return il2cpp::create_object<app::UploadCertificateRequest>(get_class());
        }
    } // namespace UploadCertificateRequest
} // namespace app::classes::types
