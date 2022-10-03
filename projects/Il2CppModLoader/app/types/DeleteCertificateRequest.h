#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeleteCertificateRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeleteCertificateRequest__Class** type_info;
        inline app::DeleteCertificateRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteCertificateRequest__Class>(type_info, "PlayFab.MultiplayerModels", "DeleteCertificateRequest");
        }
        inline app::DeleteCertificateRequest* create() {
            return il2cpp::create_object<app::DeleteCertificateRequest>(get_class());
        }
    } // namespace DeleteCertificateRequest
} // namespace app::classes::types
