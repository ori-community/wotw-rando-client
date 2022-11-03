#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildRegionUpdatedEventPayload {
        namespace {
            inline app::MultiplayerServerBuildRegionUpdatedEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerBuildRegionUpdatedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerBuildRegionUpdatedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildRegionUpdatedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerBuildRegionUpdatedEventPayload");
        }
        inline app::MultiplayerServerBuildRegionUpdatedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildRegionUpdatedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerBuildRegionUpdatedEventPayload
} // namespace app::classes::types
