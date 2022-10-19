#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromXboxLiveIDsRequest_1 {
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class** type_info = (app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047591B0));
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromXboxLiveIDsRequest");
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromXboxLiveIDsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromXboxLiveIDsRequest_1
} // namespace app::classes::types
