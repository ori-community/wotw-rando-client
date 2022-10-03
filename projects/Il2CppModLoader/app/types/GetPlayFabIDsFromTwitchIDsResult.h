#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromTwitchIDsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromTwitchIDsResult__Class** type_info;
        inline app::GetPlayFabIDsFromTwitchIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromTwitchIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromTwitchIDsResult");
        }
        inline app::GetPlayFabIDsFromTwitchIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromTwitchIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromTwitchIDsResult
} // namespace app::classes::types
