#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListCertificateSummariesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListCertificateSummariesRequest__Class** type_info;
        inline app::ListCertificateSummariesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListCertificateSummariesRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListCertificateSummariesRequest");
        }
        inline app::ListCertificateSummariesRequest* create() {
            return il2cpp::create_object<app::ListCertificateSummariesRequest>(get_class());
        }
    } // namespace ListCertificateSummariesRequest
} // namespace app::classes::types
