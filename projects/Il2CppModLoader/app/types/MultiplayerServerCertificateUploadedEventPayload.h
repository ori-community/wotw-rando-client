#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerCertificateUploadedEventPayload {
        namespace {
            inline app::MultiplayerServerCertificateUploadedEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerCertificateUploadedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerCertificateUploadedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCertificateUploadedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerCertificateUploadedEventPayload");
        }
        inline app::MultiplayerServerCertificateUploadedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerCertificateUploadedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerCertificateUploadedEventPayload
} // namespace app::classes::types
