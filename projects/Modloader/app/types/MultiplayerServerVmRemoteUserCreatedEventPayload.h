#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerVmRemoteUserCreatedEventPayload {
        namespace {
            inline app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmRemoteUserCreatedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmRemoteUserCreatedEventPayload");
        }
        inline app::MultiplayerServerVmRemoteUserCreatedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmRemoteUserCreatedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmRemoteUserCreatedEventPayload
} // namespace app::classes::types
