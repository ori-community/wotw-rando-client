#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsResult {
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__Class** type_info = (app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__Class**)(modloader::win::memory::resolve_rva(0x04716498));
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromNintendoSwitchDeviceIdsResult");
        }
        inline app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsResult
} // namespace app::classes::types
