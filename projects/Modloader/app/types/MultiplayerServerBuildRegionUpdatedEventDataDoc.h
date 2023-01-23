#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplayerServerBuildRegionUpdatedEventDataDoc__Class.h>
#include <Modloader/app/structs/MultiplayerServerBuildRegionUpdatedEventDataDoc.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildRegionUpdatedEventDataDoc {
        namespace {
            inline app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerBuildRegionUpdatedEventDataDoc");
        }
        inline app::MultiplayerServerBuildRegionUpdatedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildRegionUpdatedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerBuildRegionUpdatedEventDataDoc
} // namespace app::classes::types
