#pragma once
#include <Modloader/app/structs/MultiplayerServerCertificateUploadedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerCertificateUploadedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerCertificateUploadedEventDataDoc {
        inline app::MultiplayerServerCertificateUploadedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerCertificateUploadedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerCertificateUploadedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerCertificateUploadedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCertificateUploadedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerCertificateUploadedEventDataDoc");
        }
        inline app::MultiplayerServerCertificateUploadedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerCertificateUploadedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerCertificateUploadedEventDataDoc
} // namespace app::classes::types
