#pragma once
#include <Modloader/app/structs/MultiplayerServerBuildDeletedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerBuildDeletedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildDeletedEventPayload {
        inline app::MultiplayerServerBuildDeletedEventPayload__Class** type_info() {
            static app::MultiplayerServerBuildDeletedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerBuildDeletedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerBuildDeletedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildDeletedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerBuildDeletedEventPayload");
        }
        inline app::MultiplayerServerBuildDeletedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildDeletedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerBuildDeletedEventPayload
} // namespace app::classes::types
