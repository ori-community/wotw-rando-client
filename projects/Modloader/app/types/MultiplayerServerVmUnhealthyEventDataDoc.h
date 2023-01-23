#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplayerServerVmUnhealthyEventDataDoc__Class.h>
#include <Modloader/app/structs/MultiplayerServerVmUnhealthyEventDataDoc.h>

namespace app::classes::types {
    namespace MultiplayerServerVmUnhealthyEventDataDoc {
        namespace {
            inline app::MultiplayerServerVmUnhealthyEventDataDoc__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerVmUnhealthyEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerVmUnhealthyEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmUnhealthyEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerVmUnhealthyEventDataDoc");
        }
        inline app::MultiplayerServerVmUnhealthyEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmUnhealthyEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmUnhealthyEventDataDoc
} // namespace app::classes::types
