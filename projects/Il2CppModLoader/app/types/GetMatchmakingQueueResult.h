#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetMatchmakingQueueResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetMatchmakingQueueResult__Class** type_info;
        inline app::GetMatchmakingQueueResult__Class* get_class() {
            return il2cpp::get_class<app::GetMatchmakingQueueResult__Class>(type_info, "PlayFab.MultiplayerModels", "GetMatchmakingQueueResult");
        }
        inline app::GetMatchmakingQueueResult* create() {
            return il2cpp::create_object<app::GetMatchmakingQueueResult>(get_class());
        }
    } // namespace GetMatchmakingQueueResult
} // namespace app::classes::types
