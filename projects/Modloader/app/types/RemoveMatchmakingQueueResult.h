#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveMatchmakingQueueResult {
        inline app::RemoveMatchmakingQueueResult__Class** type_info = (app::RemoveMatchmakingQueueResult__Class**)(modloader::win::memory::resolve_rva(0x0475DBD8));
        inline app::RemoveMatchmakingQueueResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveMatchmakingQueueResult__Class>(type_info, "PlayFab.MultiplayerModels", "RemoveMatchmakingQueueResult");
        }
        inline app::RemoveMatchmakingQueueResult* create() {
            return il2cpp::create_object<app::RemoveMatchmakingQueueResult>(get_class());
        }
    } // namespace RemoveMatchmakingQueueResult
} // namespace app::classes::types
