#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTitleEnabledForMultiplayerServersStatusResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTitleEnabledForMultiplayerServersStatusResponse__Class** type_info;
        inline app::GetTitleEnabledForMultiplayerServersStatusResponse__Class* get_class() {
            return il2cpp::get_class<app::GetTitleEnabledForMultiplayerServersStatusResponse__Class>(type_info, "PlayFab.MultiplayerModels", "GetTitleEnabledForMultiplayerServersStatusResponse");
        }
        inline app::GetTitleEnabledForMultiplayerServersStatusResponse* create() {
            return il2cpp::create_object<app::GetTitleEnabledForMultiplayerServersStatusResponse>(get_class());
        }
    } // namespace GetTitleEnabledForMultiplayerServersStatusResponse
} // namespace app::classes::types
