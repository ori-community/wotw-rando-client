#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildRegionStatusChangedEventPayload {
        namespace {
            app::MultiplayerServerBuildRegionStatusChangedEventPayload__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerBuildRegionStatusChangedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerBuildRegionStatusChangedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildRegionStatusChangedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerBuildRegionStatusChangedEventPayload");
        }
        inline app::MultiplayerServerBuildRegionStatusChangedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildRegionStatusChangedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerBuildRegionStatusChangedEventPayload
} // namespace app::classes::types
