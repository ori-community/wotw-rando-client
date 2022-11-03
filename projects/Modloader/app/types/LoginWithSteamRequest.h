#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoginWithSteamRequest {
        inline app::LoginWithSteamRequest__Class** type_info = (app::LoginWithSteamRequest__Class**)(modloader::win::memory::resolve_rva(0x0477FF28));
        inline app::LoginWithSteamRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithSteamRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithSteamRequest");
        }
        inline app::LoginWithSteamRequest* create() {
            return il2cpp::create_object<app::LoginWithSteamRequest>(get_class());
        }
    } // namespace LoginWithSteamRequest
} // namespace app::classes::types
