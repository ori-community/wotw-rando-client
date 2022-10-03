#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabHttp_SendScreenTimeEvents_d_19 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabHttp_SendScreenTimeEvents_d_19__Class** type_info;
        inline app::PlayFabHttp_SendScreenTimeEvents_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabHttp_SendScreenTimeEvents_d_19__Class>(type_info, "PlayFab.Internal", "PlayFabHttp", "<SendScreenTimeEvents>d__19");
        }
        inline app::PlayFabHttp_SendScreenTimeEvents_d_19* create() {
            return il2cpp::create_object<app::PlayFabHttp_SendScreenTimeEvents_d_19>(get_class());
        }
    } // namespace PlayFabHttp_SendScreenTimeEvents_d_19
} // namespace app::classes::types
