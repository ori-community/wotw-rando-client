#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookIDsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromFacebookIDsResult__Class** type_info;
        inline app::GetPlayFabIDsFromFacebookIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookIDsResult");
        }
        inline app::GetPlayFabIDsFromFacebookIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookIDsResult
} // namespace app::classes::types
