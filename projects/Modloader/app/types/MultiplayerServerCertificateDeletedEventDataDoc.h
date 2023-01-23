#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplayerServerCertificateDeletedEventDataDoc__Class.h>
#include <Modloader/app/structs/MultiplayerServerCertificateDeletedEventDataDoc.h>

namespace app::classes::types {
    namespace MultiplayerServerCertificateDeletedEventDataDoc {
        namespace {
            inline app::MultiplayerServerCertificateDeletedEventDataDoc__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerCertificateDeletedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerCertificateDeletedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCertificateDeletedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerCertificateDeletedEventDataDoc");
        }
        inline app::MultiplayerServerCertificateDeletedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerCertificateDeletedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerCertificateDeletedEventDataDoc
} // namespace app::classes::types
