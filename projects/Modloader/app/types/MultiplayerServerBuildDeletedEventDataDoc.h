#pragma once
#include <Modloader/app/structs/MultiplayerServerBuildDeletedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerBuildDeletedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildDeletedEventDataDoc {
        inline app::MultiplayerServerBuildDeletedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerBuildDeletedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerBuildDeletedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerBuildDeletedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildDeletedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerBuildDeletedEventDataDoc");
        }
        inline app::MultiplayerServerBuildDeletedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildDeletedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerBuildDeletedEventDataDoc
} // namespace app::classes::types
