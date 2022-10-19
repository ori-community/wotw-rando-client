#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoginWithFacebookInstantGamesIdRequest {
        inline app::LoginWithFacebookInstantGamesIdRequest__Class** type_info = (app::LoginWithFacebookInstantGamesIdRequest__Class**)(modloader::win::memory::resolve_rva(0x0474B9A0));
        inline app::LoginWithFacebookInstantGamesIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithFacebookInstantGamesIdRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithFacebookInstantGamesIdRequest");
        }
        inline app::LoginWithFacebookInstantGamesIdRequest* create() {
            return il2cpp::create_object<app::LoginWithFacebookInstantGamesIdRequest>(get_class());
        }
    } // namespace LoginWithFacebookInstantGamesIdRequest
} // namespace app::classes::types
