#pragma once
#include <Modloader/app/structs/SetMatchmakingQueueResult.h>
#include <Modloader/app/structs/SetMatchmakingQueueResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetMatchmakingQueueResult {
        inline app::SetMatchmakingQueueResult__Class** type_info() {
            static app::SetMatchmakingQueueResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetMatchmakingQueueResult__Class**)(modloader::win::memory::resolve_rva(0x047805E0));
            }
            return cache;
        }
        inline app::SetMatchmakingQueueResult__Class* get_class() {
            return il2cpp::get_class<app::SetMatchmakingQueueResult__Class>(type_info(), "PlayFab.MultiplayerModels", "SetMatchmakingQueueResult");
        }
        inline app::SetMatchmakingQueueResult* create() {
            return il2cpp::create_object<app::SetMatchmakingQueueResult>(get_class());
        }
    } // namespace SetMatchmakingQueueResult
} // namespace app::classes::types
