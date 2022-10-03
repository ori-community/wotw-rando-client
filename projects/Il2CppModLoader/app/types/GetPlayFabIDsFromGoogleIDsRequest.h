#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGoogleIDsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromGoogleIDsRequest__Class** type_info;
        inline app::GetPlayFabIDsFromGoogleIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGoogleIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromGoogleIDsRequest");
        }
        inline app::GetPlayFabIDsFromGoogleIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGoogleIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromGoogleIDsRequest
} // namespace app::classes::types
