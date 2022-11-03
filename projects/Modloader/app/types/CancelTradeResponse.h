#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancelTradeResponse {
        inline app::CancelTradeResponse__Class** type_info = (app::CancelTradeResponse__Class**)(modloader::win::memory::resolve_rva(0x0476DCE8));
        inline app::CancelTradeResponse__Class* get_class() {
            return il2cpp::get_class<app::CancelTradeResponse__Class>(type_info, "PlayFab.ClientModels", "CancelTradeResponse");
        }
        inline app::CancelTradeResponse* create() {
            return il2cpp::create_object<app::CancelTradeResponse>(get_class());
        }
    } // namespace CancelTradeResponse
} // namespace app::classes::types
