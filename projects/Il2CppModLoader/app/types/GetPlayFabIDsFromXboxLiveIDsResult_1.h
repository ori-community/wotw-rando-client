#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromXboxLiveIDsResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class** type_info;
        inline app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromXboxLiveIDsResult");
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsResult_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromXboxLiveIDsResult_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromXboxLiveIDsResult_1
} // namespace app::classes::types
