#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnableMultiplayerServersForTitleResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnableMultiplayerServersForTitleResponse__Class** type_info;
        inline app::EnableMultiplayerServersForTitleResponse__Class* get_class() {
            return il2cpp::get_class<app::EnableMultiplayerServersForTitleResponse__Class>(type_info, "PlayFab.MultiplayerModels", "EnableMultiplayerServersForTitleResponse");
        }
        inline app::EnableMultiplayerServersForTitleResponse* create() {
            return il2cpp::create_object<app::EnableMultiplayerServersForTitleResponse>(get_class());
        }
    } // namespace EnableMultiplayerServersForTitleResponse
} // namespace app::classes::types
