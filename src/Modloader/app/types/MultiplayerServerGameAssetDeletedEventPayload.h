#pragma once
#include <Modloader/app/structs/MultiplayerServerGameAssetDeletedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerGameAssetDeletedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerGameAssetDeletedEventPayload {
        inline app::MultiplayerServerGameAssetDeletedEventPayload__Class** type_info() {
            static app::MultiplayerServerGameAssetDeletedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerGameAssetDeletedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerGameAssetDeletedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerGameAssetDeletedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerGameAssetDeletedEventPayload");
        }
        inline app::MultiplayerServerGameAssetDeletedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerGameAssetDeletedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerGameAssetDeletedEventPayload
} // namespace app::classes::types
