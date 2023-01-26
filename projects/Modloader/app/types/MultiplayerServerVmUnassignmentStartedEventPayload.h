#pragma once
#include <Modloader/app/structs/MultiplayerServerVmUnassignmentStartedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerVmUnassignmentStartedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmUnassignmentStartedEventPayload {
        inline app::MultiplayerServerVmUnassignmentStartedEventPayload__Class** type_info() {
            static app::MultiplayerServerVmUnassignmentStartedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerVmUnassignmentStartedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerVmUnassignmentStartedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmUnassignmentStartedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerVmUnassignmentStartedEventPayload");
        }
        inline app::MultiplayerServerVmUnassignmentStartedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmUnassignmentStartedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmUnassignmentStartedEventPayload
} // namespace app::classes::types
