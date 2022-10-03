#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookIDsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromFacebookIDsRequest__Class** type_info;
        inline app::GetPlayFabIDsFromFacebookIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookIDsRequest");
        }
        inline app::GetPlayFabIDsFromFacebookIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookIDsRequest
} // namespace app::classes::types
