#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListMatchmakingQueuesResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListMatchmakingQueuesResult__Class** type_info;
        inline app::ListMatchmakingQueuesResult__Class* get_class() {
            return il2cpp::get_class<app::ListMatchmakingQueuesResult__Class>(type_info, "PlayFab.MultiplayerModels", "ListMatchmakingQueuesResult");
        }
        inline app::ListMatchmakingQueuesResult* create() {
            return il2cpp::create_object<app::ListMatchmakingQueuesResult>(get_class());
        }
    } // namespace ListMatchmakingQueuesResult
} // namespace app::classes::types
