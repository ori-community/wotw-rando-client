#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerVmRemoteUserDeletedEventPayload {
        namespace {
            inline app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmRemoteUserDeletedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmRemoteUserDeletedEventPayload");
        }
        inline app::MultiplayerServerVmRemoteUserDeletedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmRemoteUserDeletedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmRemoteUserDeletedEventPayload
} // namespace app::classes::types
