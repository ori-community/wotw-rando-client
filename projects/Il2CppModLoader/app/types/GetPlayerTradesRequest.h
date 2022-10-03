#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerTradesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerTradesRequest__Class** type_info;
        inline app::GetPlayerTradesRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTradesRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerTradesRequest");
        }
        inline app::GetPlayerTradesRequest* create() {
            return il2cpp::create_object<app::GetPlayerTradesRequest>(get_class());
        }
    } // namespace GetPlayerTradesRequest
} // namespace app::classes::types
