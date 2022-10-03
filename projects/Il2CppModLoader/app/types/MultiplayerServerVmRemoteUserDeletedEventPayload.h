#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmRemoteUserDeletedEventPayload {
        namespace {
            app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmRemoteUserDeletedEventPayload");
        }
        inline app::MultiplayerServerVmRemoteUserDeletedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmRemoteUserDeletedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmRemoteUserDeletedEventPayload
} // namespace app::classes::types
