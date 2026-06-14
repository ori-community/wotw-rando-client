#pragma once
#include <Modloader/app/structs/CancelTradeResponse.h>
#include <Modloader/app/structs/CancelTradeResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelTradeResponse {
        inline app::CancelTradeResponse__Class** type_info() {
            static app::CancelTradeResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancelTradeResponse__Class**)(modloader::win::memory::resolve_rva(0x0476DCE8));
            }
            return cache;
        }
        inline app::CancelTradeResponse__Class* get_class() {
            return il2cpp::get_class<app::CancelTradeResponse__Class>(type_info(), "PlayFab.ClientModels", "CancelTradeResponse");
        }
        inline app::CancelTradeResponse* create() {
            return il2cpp::create_object<app::CancelTradeResponse>(get_class());
        }
    } // namespace CancelTradeResponse
} // namespace app::classes::types
