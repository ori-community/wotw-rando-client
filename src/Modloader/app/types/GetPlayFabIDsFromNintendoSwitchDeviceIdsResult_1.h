#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1 {
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1__Class** type_info() {
            static app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04719B30));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayFabIDsFromNintendoSwitchDeviceIdsResult");
        }
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1
} // namespace app::classes::types
