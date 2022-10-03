#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerCreateBuildInitiatedEventDataDoc {
        namespace {
            app::MultiplayerServerCreateBuildInitiatedEventDataDoc__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerCreateBuildInitiatedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerCreateBuildInitiatedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCreateBuildInitiatedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerCreateBuildInitiatedEventDataDoc");
        }
        inline app::MultiplayerServerCreateBuildInitiatedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerCreateBuildInitiatedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerCreateBuildInitiatedEventDataDoc
} // namespace app::classes::types
