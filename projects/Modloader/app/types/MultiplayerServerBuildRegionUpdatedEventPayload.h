#pragma once
#include <Modloader/app/structs/MultiplayerServerBuildRegionUpdatedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerBuildRegionUpdatedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildRegionUpdatedEventPayload {
        inline app::MultiplayerServerBuildRegionUpdatedEventPayload__Class** type_info() {
            static app::MultiplayerServerBuildRegionUpdatedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerBuildRegionUpdatedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerBuildRegionUpdatedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildRegionUpdatedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerBuildRegionUpdatedEventPayload");
        }
        inline app::MultiplayerServerBuildRegionUpdatedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildRegionUpdatedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerBuildRegionUpdatedEventPayload
} // namespace app::classes::types
