#pragma once
#include <Modloader/app/structs/ListMatchmakingQueuesResult.h>
#include <Modloader/app/structs/ListMatchmakingQueuesResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListMatchmakingQueuesResult {
        inline app::ListMatchmakingQueuesResult__Class** type_info() {
            static app::ListMatchmakingQueuesResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListMatchmakingQueuesResult__Class**)(modloader::win::memory::resolve_rva(0x047921E0));
            }
            return cache;
        }
        inline app::ListMatchmakingQueuesResult__Class* get_class() {
            return il2cpp::get_class<app::ListMatchmakingQueuesResult__Class>(type_info(), "PlayFab.MultiplayerModels", "ListMatchmakingQueuesResult");
        }
        inline app::ListMatchmakingQueuesResult* create() {
            return il2cpp::create_object<app::ListMatchmakingQueuesResult>(get_class());
        }
    } // namespace ListMatchmakingQueuesResult
} // namespace app::classes::types
