#pragma once
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserCreatedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserCreatedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmRemoteUserCreatedEventPayload {
        inline app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class** type_info() {
            static app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerVmRemoteUserCreatedEventPayload");
        }
        inline app::MultiplayerServerVmRemoteUserCreatedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmRemoteUserCreatedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmRemoteUserCreatedEventPayload
} // namespace app::classes::types
