#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithGameCenterRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithGameCenterRequest__Class** type_info;
        inline app::LoginWithGameCenterRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithGameCenterRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithGameCenterRequest");
        }
        inline app::LoginWithGameCenterRequest* create() {
            return il2cpp::create_object<app::LoginWithGameCenterRequest>(get_class());
        }
    } // namespace LoginWithGameCenterRequest
} // namespace app::classes::types
