#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromPSNAccountIDsRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromPSNAccountIDsRequest_1__Class** type_info;
        inline app::GetPlayFabIDsFromPSNAccountIDsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromPSNAccountIDsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromPSNAccountIDsRequest");
        }
        inline app::GetPlayFabIDsFromPSNAccountIDsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromPSNAccountIDsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromPSNAccountIDsRequest_1
} // namespace app::classes::types
