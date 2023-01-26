#pragma once
#include <Modloader/app/structs/MultiplayerServerCreateBuildInitiatedEventDataDoc.h>
#include <Modloader/app/structs/MultiplayerServerCreateBuildInitiatedEventDataDoc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerCreateBuildInitiatedEventDataDoc {
        inline app::MultiplayerServerCreateBuildInitiatedEventDataDoc__Class** type_info() {
            static app::MultiplayerServerCreateBuildInitiatedEventDataDoc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerCreateBuildInitiatedEventDataDoc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerCreateBuildInitiatedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCreateBuildInitiatedEventDataDoc__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerCreateBuildInitiatedEventDataDoc");
        }
        inline app::MultiplayerServerCreateBuildInitiatedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerCreateBuildInitiatedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerCreateBuildInitiatedEventDataDoc
} // namespace app::classes::types
