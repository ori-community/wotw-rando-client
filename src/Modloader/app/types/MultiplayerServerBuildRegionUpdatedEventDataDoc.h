#pragma once
#include <Modloader/app/structs/MultiplayerServerBuildRegionUpdatedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerBuildRegionUpdatedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildRegionUpdatedEventDataDoc {
        inline app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerBuildRegionUpdatedEventDataDoc");
        }
        inline app::MultiplayerServerBuildRegionUpdatedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildRegionUpdatedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerBuildRegionUpdatedEventDataDoc
} // namespace app::classes::types
