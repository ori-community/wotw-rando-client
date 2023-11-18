#pragma once
#include <Modloader/app/structs/MultiplayerServerCreateBuildInitiatedEventPayload.h>
#include <Modloader/app/structs/MultiplayerServerCreateBuildInitiatedEventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerCreateBuildInitiatedEventPayload {
        inline app::MultiplayerServerCreateBuildInitiatedEventPayload__Class** type_info() {
            static app::MultiplayerServerCreateBuildInitiatedEventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerCreateBuildInitiatedEventPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerCreateBuildInitiatedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCreateBuildInitiatedEventPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MultiplayerServerCreateBuildInitiatedEventPayload");
        }
        inline app::MultiplayerServerCreateBuildInitiatedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerCreateBuildInitiatedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerCreateBuildInitiatedEventPayload
} // namespace app::classes::types
