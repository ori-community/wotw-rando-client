#pragma once
#include <Modloader/app/structs/OpenTradeRequest.h>
#include <Modloader/app/structs/OpenTradeRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpenTradeRequest {
        inline app::OpenTradeRequest__Class** type_info() {
            static app::OpenTradeRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OpenTradeRequest__Class**)(modloader::win::memory::resolve_rva(0x04774718));
            }
            return cache;
        }
        inline app::OpenTradeRequest__Class* get_class() {
            return il2cpp::get_class<app::OpenTradeRequest__Class>(type_info(), "PlayFab.ClientModels", "OpenTradeRequest");
        }
        inline app::OpenTradeRequest* create() {
            return il2cpp::create_object<app::OpenTradeRequest>(get_class());
        }
    } // namespace OpenTradeRequest
} // namespace app::classes::types
