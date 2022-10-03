#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTradeStatusRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTradeStatusRequest__Class** type_info;
        inline app::GetTradeStatusRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTradeStatusRequest__Class>(type_info, "PlayFab.ClientModels", "GetTradeStatusRequest");
        }
        inline app::GetTradeStatusRequest* create() {
            return il2cpp::create_object<app::GetTradeStatusRequest>(get_class());
        }
    } // namespace GetTradeStatusRequest
} // namespace app::classes::types
