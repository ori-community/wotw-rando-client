#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerTradesResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerTradesResponse__Class** type_info;
        inline app::GetPlayerTradesResponse__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTradesResponse__Class>(type_info, "PlayFab.ClientModels", "GetPlayerTradesResponse");
        }
        inline app::GetPlayerTradesResponse* create() {
            return il2cpp::create_object<app::GetPlayerTradesResponse>(get_class());
        }
    } // namespace GetPlayerTradesResponse
} // namespace app::classes::types
