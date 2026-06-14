#pragma once
#include <Modloader/app/structs/GetTradeStatusResponse.h>
#include <Modloader/app/structs/GetTradeStatusResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTradeStatusResponse {
        inline app::GetTradeStatusResponse__Class** type_info() {
            static app::GetTradeStatusResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTradeStatusResponse__Class**)(modloader::win::memory::resolve_rva(0x04779860));
            }
            return cache;
        }
        inline app::GetTradeStatusResponse__Class* get_class() {
            return il2cpp::get_class<app::GetTradeStatusResponse__Class>(type_info(), "PlayFab.ClientModels", "GetTradeStatusResponse");
        }
        inline app::GetTradeStatusResponse* create() {
            return il2cpp::create_object<app::GetTradeStatusResponse>(get_class());
        }
    } // namespace GetTradeStatusResponse
} // namespace app::classes::types
