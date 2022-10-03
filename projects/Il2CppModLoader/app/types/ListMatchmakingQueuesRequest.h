#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListMatchmakingQueuesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListMatchmakingQueuesRequest__Class** type_info;
        inline app::ListMatchmakingQueuesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListMatchmakingQueuesRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListMatchmakingQueuesRequest");
        }
        inline app::ListMatchmakingQueuesRequest* create() {
            return il2cpp::create_object<app::ListMatchmakingQueuesRequest>(get_class());
        }
    } // namespace ListMatchmakingQueuesRequest
} // namespace app::classes::types
