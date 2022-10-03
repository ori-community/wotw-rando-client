#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGoogleIDsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromGoogleIDsResult__Class** type_info;
        inline app::GetPlayFabIDsFromGoogleIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGoogleIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromGoogleIDsResult");
        }
        inline app::GetPlayFabIDsFromGoogleIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGoogleIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromGoogleIDsResult
} // namespace app::classes::types
