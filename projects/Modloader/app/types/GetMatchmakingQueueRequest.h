#pragma once
#include <Modloader/app/structs/GetMatchmakingQueueRequest.h>
#include <Modloader/app/structs/GetMatchmakingQueueRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetMatchmakingQueueRequest {
        inline app::GetMatchmakingQueueRequest__Class** type_info() {
            static app::GetMatchmakingQueueRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetMatchmakingQueueRequest__Class**)(modloader::win::memory::resolve_rva(0x04727C78));
            }
            return cache;
        }
        inline app::GetMatchmakingQueueRequest__Class* get_class() {
            return il2cpp::get_class<app::GetMatchmakingQueueRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "GetMatchmakingQueueRequest");
        }
        inline app::GetMatchmakingQueueRequest* create() {
            return il2cpp::create_object<app::GetMatchmakingQueueRequest>(get_class());
        }
    } // namespace GetMatchmakingQueueRequest
} // namespace app::classes::types
