#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerCertificateDeletedEventPayload {
        namespace {
            inline app::MultiplayerServerCertificateDeletedEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerCertificateDeletedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerCertificateDeletedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCertificateDeletedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerCertificateDeletedEventPayload");
        }
        inline app::MultiplayerServerCertificateDeletedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerCertificateDeletedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerCertificateDeletedEventPayload
} // namespace app::classes::types
