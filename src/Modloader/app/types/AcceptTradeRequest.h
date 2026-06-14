#pragma once
#include <Modloader/app/structs/AcceptTradeRequest.h>
#include <Modloader/app/structs/AcceptTradeRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcceptTradeRequest {
        inline app::AcceptTradeRequest__Class** type_info() {
            static app::AcceptTradeRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AcceptTradeRequest__Class**)(modloader::win::memory::resolve_rva(0x04750048));
            }
            return cache;
        }
        inline app::AcceptTradeRequest__Class* get_class() {
            return il2cpp::get_class<app::AcceptTradeRequest__Class>(type_info(), "PlayFab.ClientModels", "AcceptTradeRequest");
        }
        inline app::AcceptTradeRequest* create() {
            return il2cpp::create_object<app::AcceptTradeRequest>(get_class());
        }
    } // namespace AcceptTradeRequest
} // namespace app::classes::types
