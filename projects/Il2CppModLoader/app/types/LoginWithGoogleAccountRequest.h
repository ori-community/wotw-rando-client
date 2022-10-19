#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoginWithGoogleAccountRequest {
        inline app::LoginWithGoogleAccountRequest__Class** type_info = (app::LoginWithGoogleAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047177F8));
        inline app::LoginWithGoogleAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithGoogleAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithGoogleAccountRequest");
        }
        inline app::LoginWithGoogleAccountRequest* create() {
            return il2cpp::create_object<app::LoginWithGoogleAccountRequest>(get_class());
        }
    } // namespace LoginWithGoogleAccountRequest
} // namespace app::classes::types
