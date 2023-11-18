#pragma once
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserDeletedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerVmRemoteUserDeletedEventDataDoc {
        inline app::MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerVmRemoteUserDeletedEventDataDoc");
        }
        inline app::MultiplayerServerVmRemoteUserDeletedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerVmRemoteUserDeletedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerVmRemoteUserDeletedEventDataDoc
} // namespace app::classes::types
