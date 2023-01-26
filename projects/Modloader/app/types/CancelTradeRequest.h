#pragma once
#include <Modloader/app/structs/CancelTradeRequest.h>
#include <Modloader/app/structs/CancelTradeRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelTradeRequest {
        inline app::CancelTradeRequest__Class** type_info() {
            static app::CancelTradeRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancelTradeRequest__Class**)(modloader::win::memory::resolve_rva(0x0472E600));
            }
            return cache;
        }
        inline app::CancelTradeRequest__Class* get_class() {
            return il2cpp::get_class<app::CancelTradeRequest__Class>(type_info(), "PlayFab.ClientModels", "CancelTradeRequest");
        }
        inline app::CancelTradeRequest* create() {
            return il2cpp::create_object<app::CancelTradeRequest>(get_class());
        }
    } // namespace CancelTradeRequest
} // namespace app::classes::types
