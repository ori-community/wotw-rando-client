#pragma once
#include <Modloader/app/structs/AcceptTradeResponse.h>
#include <Modloader/app/structs/AcceptTradeResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcceptTradeResponse {
        inline app::AcceptTradeResponse__Class** type_info() {
            static app::AcceptTradeResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AcceptTradeResponse__Class**)(modloader::win::memory::resolve_rva(0x0473A888));
            }
            return cache;
        }
        inline app::AcceptTradeResponse__Class* get_class() {
            return il2cpp::get_class<app::AcceptTradeResponse__Class>(type_info(), "PlayFab.ClientModels", "AcceptTradeResponse");
        }
        inline app::AcceptTradeResponse* create() {
            return il2cpp::create_object<app::AcceptTradeResponse>(get_class());
        }
    } // namespace AcceptTradeResponse
} // namespace app::classes::types
