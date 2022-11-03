#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetMatchmakingQueueRequest {
        inline app::SetMatchmakingQueueRequest__Class** type_info = (app::SetMatchmakingQueueRequest__Class**)(modloader::win::memory::resolve_rva(0x04724EB0));
        inline app::SetMatchmakingQueueRequest__Class* get_class() {
            return il2cpp::get_class<app::SetMatchmakingQueueRequest__Class>(type_info, "PlayFab.MultiplayerModels", "SetMatchmakingQueueRequest");
        }
        inline app::SetMatchmakingQueueRequest* create() {
            return il2cpp::create_object<app::SetMatchmakingQueueRequest>(get_class());
        }
    } // namespace SetMatchmakingQueueRequest
} // namespace app::classes::types
