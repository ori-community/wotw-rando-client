#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpenTradeResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpenTradeResponse__Class** type_info;
        inline app::OpenTradeResponse__Class* get_class() {
            return il2cpp::get_class<app::OpenTradeResponse__Class>(type_info, "PlayFab.ClientModels", "OpenTradeResponse");
        }
        inline app::OpenTradeResponse* create() {
            return il2cpp::create_object<app::OpenTradeResponse>(get_class());
        }
    } // namespace OpenTradeResponse
} // namespace app::classes::types
