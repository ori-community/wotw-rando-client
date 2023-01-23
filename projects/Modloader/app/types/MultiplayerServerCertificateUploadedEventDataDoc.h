#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplayerServerCertificateUploadedEventDataDoc__Class.h>
#include <Modloader/app/structs/MultiplayerServerCertificateUploadedEventDataDoc.h>

namespace app::classes::types {
    namespace MultiplayerServerCertificateUploadedEventDataDoc {
        namespace {
            inline app::MultiplayerServerCertificateUploadedEventDataDoc__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerCertificateUploadedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerCertificateUploadedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCertificateUploadedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerCertificateUploadedEventDataDoc");
        }
        inline app::MultiplayerServerCertificateUploadedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerCertificateUploadedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerCertificateUploadedEventDataDoc
} // namespace app::classes::types
