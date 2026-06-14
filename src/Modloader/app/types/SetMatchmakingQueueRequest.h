#pragma once
#include <Modloader/app/structs/SetMatchmakingQueueRequest.h>
#include <Modloader/app/structs/SetMatchmakingQueueRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetMatchmakingQueueRequest {
        inline app::SetMatchmakingQueueRequest__Class** type_info() {
            static app::SetMatchmakingQueueRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetMatchmakingQueueRequest__Class**)(modloader::win::memory::resolve_rva(0x04724EB0));
            }
            return cache;
        }
        inline app::SetMatchmakingQueueRequest__Class* get_class() {
            return il2cpp::get_class<app::SetMatchmakingQueueRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "SetMatchmakingQueueRequest");
        }
        inline app::SetMatchmakingQueueRequest* create() {
            return il2cpp::create_object<app::SetMatchmakingQueueRequest>(get_class());
        }
    } // namespace SetMatchmakingQueueRequest
} // namespace app::classes::types
