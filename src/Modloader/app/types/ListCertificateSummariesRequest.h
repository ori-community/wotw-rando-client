#pragma once
#include <Modloader/app/structs/ListCertificateSummariesRequest.h>
#include <Modloader/app/structs/ListCertificateSummariesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListCertificateSummariesRequest {
        inline app::ListCertificateSummariesRequest__Class** type_info() {
            static app::ListCertificateSummariesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListCertificateSummariesRequest__Class**)(modloader::win::memory::resolve_rva(0x0475ACD8));
            }
            return cache;
        }
        inline app::ListCertificateSummariesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListCertificateSummariesRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "ListCertificateSummariesRequest");
        }
        inline app::ListCertificateSummariesRequest* create() {
            return il2cpp::create_object<app::ListCertificateSummariesRequest>(get_class());
        }
    } // namespace ListCertificateSummariesRequest
} // namespace app::classes::types
