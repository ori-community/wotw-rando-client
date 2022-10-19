#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerCreateBuildInitiatedEventPayload {
        namespace {
            inline app::MultiplayerServerCreateBuildInitiatedEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerCreateBuildInitiatedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerCreateBuildInitiatedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerCreateBuildInitiatedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerCreateBuildInitiatedEventPayload");
        }
        inline app::MultiplayerServerCreateBuildInitiatedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerCreateBuildInitiatedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerCreateBuildInitiatedEventPayload
} // namespace app::classes::types
