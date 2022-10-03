#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithXboxRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithXboxRequest_1__Class** type_info;
        inline app::LoginWithXboxRequest_1__Class* get_class() {
            return il2cpp::get_class<app::LoginWithXboxRequest_1__Class>(type_info, "PlayFab.ServerModels", "LoginWithXboxRequest");
        }
        inline app::LoginWithXboxRequest_1* create() {
            return il2cpp::create_object<app::LoginWithXboxRequest_1>(get_class());
        }
    } // namespace LoginWithXboxRequest_1
} // namespace app::classes::types
