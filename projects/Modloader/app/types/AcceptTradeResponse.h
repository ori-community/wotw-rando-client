#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AcceptTradeResponse {
        inline app::AcceptTradeResponse__Class** type_info = (app::AcceptTradeResponse__Class**)(modloader::win::memory::resolve_rva(0x0473A888));
        inline app::AcceptTradeResponse__Class* get_class() {
            return il2cpp::get_class<app::AcceptTradeResponse__Class>(type_info, "PlayFab.ClientModels", "AcceptTradeResponse");
        }
        inline app::AcceptTradeResponse* create() {
            return il2cpp::create_object<app::AcceptTradeResponse>(get_class());
        }
    } // namespace AcceptTradeResponse
} // namespace app::classes::types
