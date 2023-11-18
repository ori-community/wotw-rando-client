#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1 {
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class** type_info() {
            static app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0471EE38));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest");
        }
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1
} // namespace app::classes::types
