#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListCertificateSummariesResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListCertificateSummariesResponse__Class** type_info;
        inline app::ListCertificateSummariesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListCertificateSummariesResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListCertificateSummariesResponse");
        }
        inline app::ListCertificateSummariesResponse* create() {
            return il2cpp::create_object<app::ListCertificateSummariesResponse>(get_class());
        }
    } // namespace ListCertificateSummariesResponse
} // namespace app::classes::types
