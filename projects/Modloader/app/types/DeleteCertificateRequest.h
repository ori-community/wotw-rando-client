#pragma once
#include <Modloader/app/structs/DeleteCertificateRequest.h>
#include <Modloader/app/structs/DeleteCertificateRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteCertificateRequest {
        inline app::DeleteCertificateRequest__Class** type_info() {
            static app::DeleteCertificateRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeleteCertificateRequest__Class**)(modloader::win::memory::resolve_rva(0x04787CC8));
            }
            return cache;
        }
        inline app::DeleteCertificateRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteCertificateRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "DeleteCertificateRequest");
        }
        inline app::DeleteCertificateRequest* create() {
            return il2cpp::create_object<app::DeleteCertificateRequest>(get_class());
        }
    } // namespace DeleteCertificateRequest
} // namespace app::classes::types
