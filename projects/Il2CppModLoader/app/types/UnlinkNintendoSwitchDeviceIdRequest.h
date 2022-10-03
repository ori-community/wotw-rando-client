#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkNintendoSwitchDeviceIdRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkNintendoSwitchDeviceIdRequest__Class** type_info;
        inline app::UnlinkNintendoSwitchDeviceIdRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkNintendoSwitchDeviceIdRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkNintendoSwitchDeviceIdRequest");
        }
        inline app::UnlinkNintendoSwitchDeviceIdRequest* create() {
            return il2cpp::create_object<app::UnlinkNintendoSwitchDeviceIdRequest>(get_class());
        }
    } // namespace UnlinkNintendoSwitchDeviceIdRequest
} // namespace app::classes::types
