#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetMatchmakingQueueRequest {
        inline app::GetMatchmakingQueueRequest__Class** type_info = (app::GetMatchmakingQueueRequest__Class**)(modloader::win::memory::resolve_rva(0x04727C78));
        inline app::GetMatchmakingQueueRequest__Class* get_class() {
            return il2cpp::get_class<app::GetMatchmakingQueueRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetMatchmakingQueueRequest");
        }
        inline app::GetMatchmakingQueueRequest* create() {
            return il2cpp::create_object<app::GetMatchmakingQueueRequest>(get_class());
        }
    } // namespace GetMatchmakingQueueRequest
} // namespace app::classes::types
