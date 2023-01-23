#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListMatchmakingTicketsForPlayerRequest__Class.h>
#include <Modloader/app/structs/ListMatchmakingTicketsForPlayerRequest.h>

namespace app::classes::types {
    namespace ListMatchmakingTicketsForPlayerRequest {
        inline app::ListMatchmakingTicketsForPlayerRequest__Class** type_info = (app::ListMatchmakingTicketsForPlayerRequest__Class**)(modloader::win::memory::resolve_rva(0x0476F720));
        inline app::ListMatchmakingTicketsForPlayerRequest__Class* get_class() {
            return il2cpp::get_class<app::ListMatchmakingTicketsForPlayerRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListMatchmakingTicketsForPlayerRequest");
        }
        inline app::ListMatchmakingTicketsForPlayerRequest* create() {
            return il2cpp::create_object<app::ListMatchmakingTicketsForPlayerRequest>(get_class());
        }
    } // namespace ListMatchmakingTicketsForPlayerRequest
} // namespace app::classes::types
