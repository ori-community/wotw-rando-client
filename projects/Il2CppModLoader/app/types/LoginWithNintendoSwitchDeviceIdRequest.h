#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithNintendoSwitchDeviceIdRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithNintendoSwitchDeviceIdRequest__Class** type_info;
        inline app::LoginWithNintendoSwitchDeviceIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithNintendoSwitchDeviceIdRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithNintendoSwitchDeviceIdRequest");
        }
        inline app::LoginWithNintendoSwitchDeviceIdRequest* create() {
            return il2cpp::create_object<app::LoginWithNintendoSwitchDeviceIdRequest>(get_class());
        }
    } // namespace LoginWithNintendoSwitchDeviceIdRequest
} // namespace app::classes::types
