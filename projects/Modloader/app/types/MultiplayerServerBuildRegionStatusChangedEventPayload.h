#pragma once
#include <Modloader/app/structs/MultiplayerServerBuildRegionStatusChangedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerBuildRegionStatusChangedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildRegionStatusChangedEventPayload {
        inline app::MultiplayerServerBuildRegionStatusChangedEventPayload__Class** type_info() {
            static app::MultiplayerServerBuildRegionStatusChangedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerBuildRegionStatusChangedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerBuildRegionStatusChangedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildRegionStatusChangedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerBuildRegionStatusChangedEventPayload");
        }
        inline app::MultiplayerServerBuildRegionStatusChangedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildRegionStatusChangedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerBuildRegionStatusChangedEventPayload
} // namespace app::classes::types
