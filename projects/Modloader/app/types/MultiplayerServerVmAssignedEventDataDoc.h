#pragma once
#include <Modloader/app/structs/MultiplayerServerVmAssignedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerVmAssignedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmAssignedEventDataDoc {
        inline app::MultiplayerServerVmAssignedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerVmAssignedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerVmAssignedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerVmAssignedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmAssignedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerVmAssignedEventDataDoc");
        }
        inline app::MultiplayerServerVmAssignedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmAssignedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmAssignedEventDataDoc
} // namespace app::classes::types
