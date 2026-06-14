#pragma once
#include <Modloader/app/structs/OpenTradeResponse.h>
#include <Modloader/app/structs/OpenTradeResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpenTradeResponse {
        inline app::OpenTradeResponse__Class** type_info() {
            static app::OpenTradeResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OpenTradeResponse__Class**)(modloader::win::memory::resolve_rva(0x04785DF8));
            }
            return cache;
        }
        inline app::OpenTradeResponse__Class* get_class() {
            return il2cpp::get_class<app::OpenTradeResponse__Class>(type_info(), "PlayFab.ClientModels", "OpenTradeResponse");
        }
        inline app::OpenTradeResponse* create() {
            return il2cpp::create_object<app::OpenTradeResponse>(get_class());
        }
    } // namespace OpenTradeResponse
} // namespace app::classes::types
