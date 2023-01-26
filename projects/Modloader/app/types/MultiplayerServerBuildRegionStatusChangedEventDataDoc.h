#pragma once
#include <Modloader/app/structs/MultiplayerServerBuildRegionStatusChangedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildRegionStatusChangedEventDataDoc {
        inline app::MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerBuildRegionStatusChangedEventDataDoc");
        }
        inline app::MultiplayerServerBuildRegionStatusChangedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildRegionStatusChangedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerBuildRegionStatusChangedEventDataDoc
} // namespace app::classes::types
