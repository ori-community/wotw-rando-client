#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetMatchmakingQueueRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetMatchmakingQueueRequest__Class** type_info;
        inline app::SetMatchmakingQueueRequest__Class* get_class() {
            return il2cpp::get_class<app::SetMatchmakingQueueRequest__Class>(type_info, "PlayFab.MultiplayerModels", "SetMatchmakingQueueRequest");
        }
        inline app::SetMatchmakingQueueRequest* create() {
            return il2cpp::create_object<app::SetMatchmakingQueueRequest>(get_class());
        }
    } // namespace SetMatchmakingQueueRequest
} // namespace app::classes::types
