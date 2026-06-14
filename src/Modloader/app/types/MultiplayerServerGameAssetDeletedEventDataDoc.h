#pragma once
#include <Modloader/app/structs/MultiplayerServerGameAssetDeletedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerGameAssetDeletedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerGameAssetDeletedEventDataDoc {
        inline app::MultiplayerServerGameAssetDeletedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerGameAssetDeletedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerGameAssetDeletedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerGameAssetDeletedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerGameAssetDeletedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerGameAssetDeletedEventDataDoc");
        }
        inline app::MultiplayerServerGameAssetDeletedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerGameAssetDeletedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerGameAssetDeletedEventDataDoc
} // namespace app::classes::types
