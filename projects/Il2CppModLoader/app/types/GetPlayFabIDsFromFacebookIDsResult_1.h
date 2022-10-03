#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookIDsResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromFacebookIDsResult_1__Class** type_info;
        inline app::GetPlayFabIDsFromFacebookIDsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookIDsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromFacebookIDsResult");
        }
        inline app::GetPlayFabIDsFromFacebookIDsResult_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookIDsResult_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookIDsResult_1
} // namespace app::classes::types
