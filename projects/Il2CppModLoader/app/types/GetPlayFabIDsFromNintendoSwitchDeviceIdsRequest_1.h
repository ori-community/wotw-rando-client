#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class** type_info;
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest");
        }
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1
} // namespace app::classes::types
