#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTitleEnabledForMultiplayerServersStatusRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTitleEnabledForMultiplayerServersStatusRequest__Class** type_info;
        inline app::GetTitleEnabledForMultiplayerServersStatusRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTitleEnabledForMultiplayerServersStatusRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetTitleEnabledForMultiplayerServersStatusRequest");
        }
        inline app::GetTitleEnabledForMultiplayerServersStatusRequest* create() {
            return il2cpp::create_object<app::GetTitleEnabledForMultiplayerServersStatusRequest>(get_class());
        }
    } // namespace GetTitleEnabledForMultiplayerServersStatusRequest
} // namespace app::classes::types
