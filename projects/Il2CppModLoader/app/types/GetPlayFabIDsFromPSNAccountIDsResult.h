#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromPSNAccountIDsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromPSNAccountIDsResult__Class** type_info;
        inline app::GetPlayFabIDsFromPSNAccountIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromPSNAccountIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromPSNAccountIDsResult");
        }
        inline app::GetPlayFabIDsFromPSNAccountIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromPSNAccountIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromPSNAccountIDsResult
} // namespace app::classes::types
