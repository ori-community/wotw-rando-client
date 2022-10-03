#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookInstantGamesIdsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Class** type_info;
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookInstantGamesIdsRequest");
        }
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookInstantGamesIdsRequest
} // namespace app::classes::types
