#pragma once
#include <Modloader/app/structs/MultiplayerServerVmUnhealthyEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerVmUnhealthyEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmUnhealthyEventPayload {
        inline app::MultiplayerServerVmUnhealthyEventPayload__Class** type_info() {
            static app::MultiplayerServerVmUnhealthyEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerVmUnhealthyEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerVmUnhealthyEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmUnhealthyEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerVmUnhealthyEventPayload");
        }
        inline app::MultiplayerServerVmUnhealthyEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmUnhealthyEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmUnhealthyEventPayload
} // namespace app::classes::types
