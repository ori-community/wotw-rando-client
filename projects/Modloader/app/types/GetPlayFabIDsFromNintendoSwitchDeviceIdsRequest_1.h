#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1 {
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class** type_info = (app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0471EE38));
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest");
        }
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1
} // namespace app::classes::types
