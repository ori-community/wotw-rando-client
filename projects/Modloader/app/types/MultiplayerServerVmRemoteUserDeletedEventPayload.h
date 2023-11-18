#pragma once
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserDeletedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserDeletedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmRemoteUserDeletedEventPayload {
        inline app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class** type_info() {
            static app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerVmRemoteUserDeletedEventPayload");
        }
        inline app::MultiplayerServerVmRemoteUserDeletedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmRemoteUserDeletedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmRemoteUserDeletedEventPayload
} // namespace app::classes::types
