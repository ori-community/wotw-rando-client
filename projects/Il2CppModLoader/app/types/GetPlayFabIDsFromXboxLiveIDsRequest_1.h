#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromXboxLiveIDsRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class** type_info;
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromXboxLiveIDsRequest");
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromXboxLiveIDsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromXboxLiveIDsRequest_1
} // namespace app::classes::types
