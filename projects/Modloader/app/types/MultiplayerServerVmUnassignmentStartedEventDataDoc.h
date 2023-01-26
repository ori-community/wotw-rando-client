#pragma once
#include <Modloader/app/structs/MultiplayerServerVmUnassignmentStartedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerVmUnassignmentStartedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmUnassignmentStartedEventDataDoc {
        inline app::MultiplayerServerVmUnassignmentStartedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerVmUnassignmentStartedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerVmUnassignmentStartedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerVmUnassignmentStartedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmUnassignmentStartedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerVmUnassignmentStartedEventDataDoc");
        }
        inline app::MultiplayerServerVmUnassignmentStartedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmUnassignmentStartedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmUnassignmentStartedEventDataDoc
} // namespace app::classes::types
