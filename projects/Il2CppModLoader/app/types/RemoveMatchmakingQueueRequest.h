#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveMatchmakingQueueRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoveMatchmakingQueueRequest__Class** type_info;
        inline app::RemoveMatchmakingQueueRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveMatchmakingQueueRequest__Class>(type_info, "PlayFab.MultiplayerModels", "RemoveMatchmakingQueueRequest");
        }
        inline app::RemoveMatchmakingQueueRequest* create() {
            return il2cpp::create_object<app::RemoveMatchmakingQueueRequest>(get_class());
        }
    } // namespace RemoveMatchmakingQueueRequest
} // namespace app::classes::types
