#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Class** type_info;
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest");
        }
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
} // namespace app::classes::types
