#pragma once
#include <Modloader/app/structs/MultiplayerServerVmAssignedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerVmAssignedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmAssignedEventPayload {
        inline app::MultiplayerServerVmAssignedEventPayload__Class** type_info() {
            static app::MultiplayerServerVmAssignedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerVmAssignedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerVmAssignedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmAssignedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerVmAssignedEventPayload");
        }
        inline app::MultiplayerServerVmAssignedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmAssignedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmAssignedEventPayload
} // namespace app::classes::types
