#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildRegionStatusChangedEventDataDoc {
        namespace {
            app::MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerBuildRegionStatusChangedEventDataDoc");
        }
        inline app::MultiplayerServerBuildRegionStatusChangedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildRegionStatusChangedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerBuildRegionStatusChangedEventDataDoc
} // namespace app::classes::types
