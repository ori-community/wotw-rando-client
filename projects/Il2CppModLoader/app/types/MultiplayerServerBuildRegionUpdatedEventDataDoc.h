#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildRegionUpdatedEventDataDoc {
        namespace {
            app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildRegionUpdatedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerBuildRegionUpdatedEventDataDoc");
        }
        inline app::MultiplayerServerBuildRegionUpdatedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildRegionUpdatedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerBuildRegionUpdatedEventDataDoc
} // namespace app::classes::types
