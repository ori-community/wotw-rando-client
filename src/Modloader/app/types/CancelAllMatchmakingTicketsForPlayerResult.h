#pragma once
#include <Modloader/app/structs/CancelAllMatchmakingTicketsForPlayerResult.h>
#include <Modloader/app/structs/CancelAllMatchmakingTicketsForPlayerResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelAllMatchmakingTicketsForPlayerResult {
        inline app::CancelAllMatchmakingTicketsForPlayerResult__Class** type_info() {
            static app::CancelAllMatchmakingTicketsForPlayerResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancelAllMatchmakingTicketsForPlayerResult__Class**)(modloader::win::memory::resolve_rva(0x04721290));
            }
            return cache;
        }
        inline app::CancelAllMatchmakingTicketsForPlayerResult__Class* get_class() {
            return il2cpp::get_class<app::CancelAllMatchmakingTicketsForPlayerResult__Class>(type_info(), "PlayFab.MultiplayerModels", "CancelAllMatchmakingTicketsForPlayerResult");
        }
        inline app::CancelAllMatchmakingTicketsForPlayerResult* create() {
            return il2cpp::create_object<app::CancelAllMatchmakingTicketsForPlayerResult>(get_class());
        }
    } // namespace CancelAllMatchmakingTicketsForPlayerResult
} // namespace app::classes::types
