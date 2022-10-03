#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancelTradeResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CancelTradeResponse__Class** type_info;
        inline app::CancelTradeResponse__Class* get_class() {
            return il2cpp::get_class<app::CancelTradeResponse__Class>(type_info, "PlayFab.ClientModels", "CancelTradeResponse");
        }
        inline app::CancelTradeResponse* create() {
            return il2cpp::create_object<app::CancelTradeResponse>(get_class());
        }
    } // namespace CancelTradeResponse
} // namespace app::classes::types
