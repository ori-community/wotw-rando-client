#pragma once
#include <Modloader/app/structs/GetPlayerTradesRequest.h>
#include <Modloader/app/structs/GetPlayerTradesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerTradesRequest {
        inline app::GetPlayerTradesRequest__Class** type_info() {
            static app::GetPlayerTradesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerTradesRequest__Class**)(modloader::win::memory::resolve_rva(0x04766768));
            }
            return cache;
        }
        inline app::GetPlayerTradesRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTradesRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerTradesRequest");
        }
        inline app::GetPlayerTradesRequest* create() {
            return il2cpp::create_object<app::GetPlayerTradesRequest>(get_class());
        }
    } // namespace GetPlayerTradesRequest
} // namespace app::classes::types
