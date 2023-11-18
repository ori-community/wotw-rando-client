#pragma once
#include <Modloader/app/structs/MultiplayerServerCertificateUploadedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerCertificateUploadedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerCertificateUploadedEventPayload {
        inline app::MultiplayerServerCertificateUploadedEventPayload__Class** type_info() {
            static app::MultiplayerServerCertificateUploadedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerCertificateUploadedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerCertificateUploadedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCertificateUploadedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerCertificateUploadedEventPayload");
        }
        inline app::MultiplayerServerCertificateUploadedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerCertificateUploadedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerCertificateUploadedEventPayload
} // namespace app::classes::types
