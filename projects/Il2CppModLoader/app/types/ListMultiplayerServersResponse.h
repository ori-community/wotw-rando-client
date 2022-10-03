#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListMultiplayerServersResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListMultiplayerServersResponse__Class** type_info;
        inline app::ListMultiplayerServersResponse__Class* get_class() {
            return il2cpp::get_class<app::ListMultiplayerServersResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListMultiplayerServersResponse");
        }
        inline app::ListMultiplayerServersResponse* create() {
            return il2cpp::create_object<app::ListMultiplayerServersResponse>(get_class());
        }
    } // namespace ListMultiplayerServersResponse
} // namespace app::classes::types
