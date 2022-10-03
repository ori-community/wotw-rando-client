#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGameCenterIDsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromGameCenterIDsResult__Class** type_info;
        inline app::GetPlayFabIDsFromGameCenterIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGameCenterIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromGameCenterIDsResult");
        }
        inline app::GetPlayFabIDsFromGameCenterIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGameCenterIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromGameCenterIDsResult
} // namespace app::classes::types
