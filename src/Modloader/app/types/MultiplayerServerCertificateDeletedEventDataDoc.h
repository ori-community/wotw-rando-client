#pragma once
#include <Modloader/app/structs/MultiplayerServerCertificateDeletedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerCertificateDeletedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerCertificateDeletedEventDataDoc {
        inline app::MultiplayerServerCertificateDeletedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerCertificateDeletedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerCertificateDeletedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerCertificateDeletedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCertificateDeletedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerCertificateDeletedEventDataDoc");
        }
        inline app::MultiplayerServerCertificateDeletedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerCertificateDeletedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerCertificateDeletedEventDataDoc
} // namespace app::classes::types
