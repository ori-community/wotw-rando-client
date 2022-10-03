#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkNintendoSwitchDeviceIdRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkNintendoSwitchDeviceIdRequest__Class** type_info;
        inline app::LinkNintendoSwitchDeviceIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkNintendoSwitchDeviceIdRequest__Class>(type_info, "PlayFab.ClientModels", "LinkNintendoSwitchDeviceIdRequest");
        }
        inline app::LinkNintendoSwitchDeviceIdRequest* create() {
            return il2cpp::create_object<app::LinkNintendoSwitchDeviceIdRequest>(get_class());
        }
    } // namespace LinkNintendoSwitchDeviceIdRequest
} // namespace app::classes::types
