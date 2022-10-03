#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromPSNAccountIDsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromPSNAccountIDsRequest__Class** type_info;
        inline app::GetPlayFabIDsFromPSNAccountIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromPSNAccountIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromPSNAccountIDsRequest");
        }
        inline app::GetPlayFabIDsFromPSNAccountIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromPSNAccountIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromPSNAccountIDsRequest
} // namespace app::classes::types
