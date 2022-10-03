#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcceptTradeResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AcceptTradeResponse__Class** type_info;
        inline app::AcceptTradeResponse__Class* get_class() {
            return il2cpp::get_class<app::AcceptTradeResponse__Class>(type_info, "PlayFab.ClientModels", "AcceptTradeResponse");
        }
        inline app::AcceptTradeResponse* create() {
            return il2cpp::create_object<app::AcceptTradeResponse>(get_class());
        }
    } // namespace AcceptTradeResponse
} // namespace app::classes::types
