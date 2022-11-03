#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerVmAssignedEventPayload {
        namespace {
            inline app::MultiplayerServerVmAssignedEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerVmAssignedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmAssignedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmAssignedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmAssignedEventPayload");
        }
        inline app::MultiplayerServerVmAssignedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmAssignedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmAssignedEventPayload
} // namespace app::classes::types
