#pragma once
#include <Modloader/app/structs/ListMatchmakingQueuesRequest.h>
#include <Modloader/app/structs/ListMatchmakingQueuesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListMatchmakingQueuesRequest {
        inline app::ListMatchmakingQueuesRequest__Class** type_info() {
            static app::ListMatchmakingQueuesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListMatchmakingQueuesRequest__Class**)(modloader::win::memory::resolve_rva(0x04739468));
            }
            return cache;
        }
        inline app::ListMatchmakingQueuesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListMatchmakingQueuesRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "ListMatchmakingQueuesRequest");
        }
        inline app::ListMatchmakingQueuesRequest* create() {
            return il2cpp::create_object<app::ListMatchmakingQueuesRequest>(get_class());
        }
    } // namespace ListMatchmakingQueuesRequest
} // namespace app::classes::types
