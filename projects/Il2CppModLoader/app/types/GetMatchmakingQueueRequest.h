#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetMatchmakingQueueRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetMatchmakingQueueRequest__Class** type_info;
        inline app::GetMatchmakingQueueRequest__Class* get_class() {
            return il2cpp::get_class<app::GetMatchmakingQueueRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetMatchmakingQueueRequest");
        }
        inline app::GetMatchmakingQueueRequest* create() {
            return il2cpp::create_object<app::GetMatchmakingQueueRequest>(get_class());
        }
    } // namespace GetMatchmakingQueueRequest
} // namespace app::classes::types
