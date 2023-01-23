#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListCertificateSummariesResponse__Class.h>
#include <Modloader/app/structs/ListCertificateSummariesResponse.h>

namespace app::classes::types {
    namespace ListCertificateSummariesResponse {
        inline app::ListCertificateSummariesResponse__Class** type_info = (app::ListCertificateSummariesResponse__Class**)(modloader::win::memory::resolve_rva(0x0478DA08));
        inline app::ListCertificateSummariesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListCertificateSummariesResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListCertificateSummariesResponse");
        }
        inline app::ListCertificateSummariesResponse* create() {
            return il2cpp::create_object<app::ListCertificateSummariesResponse>(get_class());
        }
    } // namespace ListCertificateSummariesResponse
} // namespace app::classes::types
