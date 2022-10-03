#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromXboxLiveIDsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromXboxLiveIDsRequest__Class** type_info;
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromXboxLiveIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromXboxLiveIDsRequest");
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromXboxLiveIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromXboxLiveIDsRequest
} // namespace app::classes::types
