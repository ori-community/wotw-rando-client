#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGameCenterIDsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromGameCenterIDsRequest__Class** type_info;
        inline app::GetPlayFabIDsFromGameCenterIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGameCenterIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromGameCenterIDsRequest");
        }
        inline app::GetPlayFabIDsFromGameCenterIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGameCenterIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromGameCenterIDsRequest
} // namespace app::classes::types
