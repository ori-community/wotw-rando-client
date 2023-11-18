#pragma once
#include <Modloader/app/structs/GetTradeStatusRequest.h>
#include <Modloader/app/structs/GetTradeStatusRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTradeStatusRequest {
        inline app::GetTradeStatusRequest__Class** type_info() {
            static app::GetTradeStatusRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTradeStatusRequest__Class**)(modloader::win::memory::resolve_rva(0x04765820));
            }
            return cache;
        }
        inline app::GetTradeStatusRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTradeStatusRequest__Class>(type_info(), "PlayFab.ClientModels", "GetTradeStatusRequest");
        }
        inline app::GetTradeStatusRequest* create() {
            return il2cpp::create_object<app::GetTradeStatusRequest>(get_class());
        }
    } // namespace GetTradeStatusRequest
} // namespace app::classes::types
