#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoginWithServerCustomIdRequest {
        inline app::LoginWithServerCustomIdRequest__Class** type_info = (app::LoginWithServerCustomIdRequest__Class**)(modloader::win::memory::resolve_rva(0x04756DD8));
        inline app::LoginWithServerCustomIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithServerCustomIdRequest__Class>(type_info, "PlayFab.ServerModels", "LoginWithServerCustomIdRequest");
        }
        inline app::LoginWithServerCustomIdRequest* create() {
            return il2cpp::create_object<app::LoginWithServerCustomIdRequest>(get_class());
        }
    } // namespace LoginWithServerCustomIdRequest
} // namespace app::classes::types
