#pragma once
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserCreatedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmRemoteUserCreatedEventDataDoc {
        inline app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerVmRemoteUserCreatedEventDataDoc");
        }
        inline app::MultiplayerServerVmRemoteUserCreatedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmRemoteUserCreatedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmRemoteUserCreatedEventDataDoc
} // namespace app::classes::types
