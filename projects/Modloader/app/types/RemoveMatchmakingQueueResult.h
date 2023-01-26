#pragma once
#include <Modloader/app/structs/RemoveMatchmakingQueueResult.h>
#include <Modloader/app/structs/RemoveMatchmakingQueueResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveMatchmakingQueueResult {
        inline app::RemoveMatchmakingQueueResult__Class** type_info() {
            static app::RemoveMatchmakingQueueResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoveMatchmakingQueueResult__Class**)(modloader::win::memory::resolve_rva(0x0475DBD8));
            }
            return cache;
        }
        inline app::RemoveMatchmakingQueueResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveMatchmakingQueueResult__Class>(type_info(), "PlayFab.MultiplayerModels", "RemoveMatchmakingQueueResult");
        }
        inline app::RemoveMatchmakingQueueResult* create() {
            return il2cpp::create_object<app::RemoveMatchmakingQueueResult>(get_class());
        }
    } // namespace RemoveMatchmakingQueueResult
} // namespace app::classes::types
