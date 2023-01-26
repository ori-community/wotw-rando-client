#pragma once
#include <Modloader/app/structs/GetPlayerTradesResponse.h>
#include <Modloader/app/structs/GetPlayerTradesResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerTradesResponse {
        inline app::GetPlayerTradesResponse__Class** type_info() {
            static app::GetPlayerTradesResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerTradesResponse__Class**)(modloader::win::memory::resolve_rva(0x0478EBB8));
            }
            return cache;
        }
        inline app::GetPlayerTradesResponse__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTradesResponse__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerTradesResponse");
        }
        inline app::GetPlayerTradesResponse* create() {
            return il2cpp::create_object<app::GetPlayerTradesResponse>(get_class());
        }
    } // namespace GetPlayerTradesResponse
} // namespace app::classes::types
