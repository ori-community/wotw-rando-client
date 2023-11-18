#pragma once
#include <Modloader/app/structs/MultiplayerServerCertificateDeletedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerCertificateDeletedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerCertificateDeletedEventPayload {
        inline app::MultiplayerServerCertificateDeletedEventPayload__Class** type_info() {
            static app::MultiplayerServerCertificateDeletedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerCertificateDeletedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerCertificateDeletedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCertificateDeletedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerCertificateDeletedEventPayload");
        }
        inline app::MultiplayerServerCertificateDeletedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerCertificateDeletedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerCertificateDeletedEventPayload
} // namespace app::classes::types
