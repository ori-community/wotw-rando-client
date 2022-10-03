#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveMatchmakingQueueResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoveMatchmakingQueueResult__Class** type_info;
        inline app::RemoveMatchmakingQueueResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveMatchmakingQueueResult__Class>(type_info, "PlayFab.MultiplayerModels", "RemoveMatchmakingQueueResult");
        }
        inline app::RemoveMatchmakingQueueResult* create() {
            return il2cpp::create_object<app::RemoveMatchmakingQueueResult>(get_class());
        }
    } // namespace RemoveMatchmakingQueueResult
} // namespace app::classes::types
