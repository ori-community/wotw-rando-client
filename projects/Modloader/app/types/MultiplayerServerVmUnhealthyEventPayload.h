#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplayerServerVmUnhealthyEventPayload__Class.h>
#include <Modloader/app/structs/MultiplayerServerVmUnhealthyEventPayload.h>

namespace app::classes::types {
    namespace MultiplayerServerVmUnhealthyEventPayload {
        namespace {
            inline app::MultiplayerServerVmUnhealthyEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerVmUnhealthyEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmUnhealthyEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmUnhealthyEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmUnhealthyEventPayload");
        }
        inline app::MultiplayerServerVmUnhealthyEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerVmUnhealthyEventPayload>(get_class());
        }
    } // namespace MultiplayerServerVmUnhealthyEventPayload
} // namespace app::classes::types
