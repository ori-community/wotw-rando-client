#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListCertificateSummariesRequest {
        inline app::ListCertificateSummariesRequest__Class** type_info = (app::ListCertificateSummariesRequest__Class**)(modloader::win::memory::resolve_rva(0x0475ACD8));
        inline app::ListCertificateSummariesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListCertificateSummariesRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListCertificateSummariesRequest");
        }
        inline app::ListCertificateSummariesRequest* create() {
            return il2cpp::create_object<app::ListCertificateSummariesRequest>(get_class());
        }
    } // namespace ListCertificateSummariesRequest
} // namespace app::classes::types
