#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerVmUnassignmentStartedEventPayload {
        namespace {
            inline app::MultiplayerServerVmUnassignmentStartedEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerVmUnassignmentStartedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmUnassignmentStartedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmUnassignmentStartedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmUnassignmentStartedEventPayload");
        }
        inline app::MultiplayerServerVmUnassignmentStartedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmUnassignmentStartedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmUnassignmentStartedEventPayload
} // namespace app::classes::types
