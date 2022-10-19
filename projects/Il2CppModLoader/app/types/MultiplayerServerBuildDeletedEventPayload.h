#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerBuildDeletedEventPayload {
        namespace {
            inline app::MultiplayerServerBuildDeletedEventPayload__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerBuildDeletedEventPayload__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerBuildDeletedEventPayload__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerBuildDeletedEventPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerBuildDeletedEventPayload");
        }
        inline app::MultiplayerServerBuildDeletedEventPayload* create() {
            return il2cpp::create_object<app::MultiplayerServerBuildDeletedEventPayload>(get_class());
        }
    } // namespace MultiplayerServerBuildDeletedEventPayload
} // namespace app::classes::types
