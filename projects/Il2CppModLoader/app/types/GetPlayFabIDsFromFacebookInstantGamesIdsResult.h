#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookInstantGamesIdsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromFacebookInstantGamesIdsResult__Class** type_info;
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookInstantGamesIdsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookInstantGamesIdsResult");
        }
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookInstantGamesIdsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookInstantGamesIdsResult
} // namespace app::classes::types
