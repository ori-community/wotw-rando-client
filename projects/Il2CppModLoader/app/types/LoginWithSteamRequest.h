#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithSteamRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithSteamRequest__Class** type_info;
        inline app::LoginWithSteamRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithSteamRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithSteamRequest");
        }
        inline app::LoginWithSteamRequest* create() {
            return il2cpp::create_object<app::LoginWithSteamRequest>(get_class());
        }
    } // namespace LoginWithSteamRequest
} // namespace app::classes::types
