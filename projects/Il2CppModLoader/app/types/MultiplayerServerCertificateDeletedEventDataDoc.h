#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerCertificateDeletedEventDataDoc {
        namespace {
            app::MultiplayerServerCertificateDeletedEventDataDoc__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerCertificateDeletedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerCertificateDeletedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCertificateDeletedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerCertificateDeletedEventDataDoc");
        }
        inline app::MultiplayerServerCertificateDeletedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerCertificateDeletedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerCertificateDeletedEventDataDoc
} // namespace app::classes::types
