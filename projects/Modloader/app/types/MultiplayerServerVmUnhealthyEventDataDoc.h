#pragma once
#include <Modloader/app/structs/MultiplayerServerVmUnhealthyEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerVmUnhealthyEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmUnhealthyEventDataDoc {
        inline app::MultiplayerServerVmUnhealthyEventDataDoc__Class** type_info() {
            static app::MultiplayerServerVmUnhealthyEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerVmUnhealthyEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerVmUnhealthyEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmUnhealthyEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerVmUnhealthyEventDataDoc");
        }
        inline app::MultiplayerServerVmUnhealthyEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmUnhealthyEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmUnhealthyEventDataDoc
} // namespace app::classes::types
