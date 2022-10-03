#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancelTradeRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CancelTradeRequest__Class** type_info;
        inline app::CancelTradeRequest__Class* get_class() {
            return il2cpp::get_class<app::CancelTradeRequest__Class>(type_info, "PlayFab.ClientModels", "CancelTradeRequest");
        }
        inline app::CancelTradeRequest* create() {
            return il2cpp::create_object<app::CancelTradeRequest>(get_class());
        }
    } // namespace CancelTradeRequest
} // namespace app::classes::types
