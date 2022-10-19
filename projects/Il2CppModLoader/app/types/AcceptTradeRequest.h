#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AcceptTradeRequest {
        inline app::AcceptTradeRequest__Class** type_info = (app::AcceptTradeRequest__Class**)(modloader::win::memory::resolve_rva(0x04750048));
        inline app::AcceptTradeRequest__Class* get_class() {
            return il2cpp::get_class<app::AcceptTradeRequest__Class>(type_info, "PlayFab.ClientModels", "AcceptTradeRequest");
        }
        inline app::AcceptTradeRequest* create() {
            return il2cpp::create_object<app::AcceptTradeRequest>(get_class());
        }
    } // namespace AcceptTradeRequest
} // namespace app::classes::types
