#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpenTradeRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpenTradeRequest__Class** type_info;
        inline app::OpenTradeRequest__Class* get_class() {
            return il2cpp::get_class<app::OpenTradeRequest__Class>(type_info, "PlayFab.ClientModels", "OpenTradeRequest");
        }
        inline app::OpenTradeRequest* create() {
            return il2cpp::create_object<app::OpenTradeRequest>(get_class());
        }
    } // namespace OpenTradeRequest
} // namespace app::classes::types
