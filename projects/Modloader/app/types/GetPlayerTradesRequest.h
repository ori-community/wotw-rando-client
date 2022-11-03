#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerTradesRequest {
        inline app::GetPlayerTradesRequest__Class** type_info = (app::GetPlayerTradesRequest__Class**)(modloader::win::memory::resolve_rva(0x04766768));
        inline app::GetPlayerTradesRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTradesRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerTradesRequest");
        }
        inline app::GetPlayerTradesRequest* create() {
            return il2cpp::create_object<app::GetPlayerTradesRequest>(get_class());
        }
    } // namespace GetPlayerTradesRequest
} // namespace app::classes::types
