#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTradeStatusResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTradeStatusResponse__Class** type_info;
        inline app::GetTradeStatusResponse__Class* get_class() {
            return il2cpp::get_class<app::GetTradeStatusResponse__Class>(type_info, "PlayFab.ClientModels", "GetTradeStatusResponse");
        }
        inline app::GetTradeStatusResponse* create() {
            return il2cpp::create_object<app::GetTradeStatusResponse>(get_class());
        }
    } // namespace GetTradeStatusResponse
} // namespace app::classes::types
