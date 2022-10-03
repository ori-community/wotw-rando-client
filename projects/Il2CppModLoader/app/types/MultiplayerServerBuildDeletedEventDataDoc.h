#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildDeletedEventDataDoc {
        namespace {
            app::MultiplayerServerBuildDeletedEventDataDoc__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerBuildDeletedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerBuildDeletedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildDeletedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerBuildDeletedEventDataDoc");
        }
        inline app::MultiplayerServerBuildDeletedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildDeletedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerBuildDeletedEventDataDoc
} // namespace app::classes::types
