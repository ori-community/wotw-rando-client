#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest {
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Class** type_info() {
            static app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Class**)(modloader::win::memory::resolve_rva(0x04762DB0));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest");
        }
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
} // namespace app::classes::types
