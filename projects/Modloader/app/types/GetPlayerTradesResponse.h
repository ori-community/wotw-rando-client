#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerTradesResponse {
        inline app::GetPlayerTradesResponse__Class** type_info = (app::GetPlayerTradesResponse__Class**)(modloader::win::memory::resolve_rva(0x0478EBB8));
        inline app::GetPlayerTradesResponse__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTradesResponse__Class>(type_info, "PlayFab.ClientModels", "GetPlayerTradesResponse");
        }
        inline app::GetPlayerTradesResponse* create() {
            return il2cpp::create_object<app::GetPlayerTradesResponse>(get_class());
        }
    } // namespace GetPlayerTradesResponse
} // namespace app::classes::types
