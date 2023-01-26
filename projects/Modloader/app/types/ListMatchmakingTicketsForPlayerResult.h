#pragma once
#include <Modloader/app/structs/ListMatchmakingTicketsForPlayerResult.h>
#include <Modloader/app/structs/ListMatchmakingTicketsForPlayerResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListMatchmakingTicketsForPlayerResult {
        inline app::ListMatchmakingTicketsForPlayerResult__Class** type_info() {
            static app::ListMatchmakingTicketsForPlayerResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListMatchmakingTicketsForPlayerResult__Class**)(modloader::win::memory::resolve_rva(0x04755DC8));
            }
            return cache;
        }
        inline app::ListMatchmakingTicketsForPlayerResult__Class* get_class() {
            return il2cpp::get_class<app::ListMatchmakingTicketsForPlayerResult__Class>(type_info(), "PlayFab.MultiplayerModels", "ListMatchmakingTicketsForPlayerResult");
        }
        inline app::ListMatchmakingTicketsForPlayerResult* create() {
            return il2cpp::create_object<app::ListMatchmakingTicketsForPlayerResult>(get_class());
        }
    } // namespace ListMatchmakingTicketsForPlayerResult
} // namespace app::classes::types
