#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetMatchmakingQueueResult {
        inline app::GetMatchmakingQueueResult__Class** type_info = (app::GetMatchmakingQueueResult__Class**)(modloader::win::memory::resolve_rva(0x04771818));
        inline app::GetMatchmakingQueueResult__Class* get_class() {
            return il2cpp::get_class<app::GetMatchmakingQueueResult__Class>(type_info, "PlayFab.MultiplayerModels", "GetMatchmakingQueueResult");
        }
        inline app::GetMatchmakingQueueResult* create() {
            return il2cpp::create_object<app::GetMatchmakingQueueResult>(get_class());
        }
    } // namespace GetMatchmakingQueueResult
} // namespace app::classes::types
