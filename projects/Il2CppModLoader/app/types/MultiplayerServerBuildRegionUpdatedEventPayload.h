#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildRegionUpdatedEventPayload {
        namespace {
            app::MultiplayerServerBuildRegionUpdatedEventPayload__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerBuildRegionUpdatedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerBuildRegionUpdatedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildRegionUpdatedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerBuildRegionUpdatedEventPayload");
        }
        inline app::MultiplayerServerBuildRegionUpdatedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildRegionUpdatedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerBuildRegionUpdatedEventPayload
} // namespace app::classes::types
