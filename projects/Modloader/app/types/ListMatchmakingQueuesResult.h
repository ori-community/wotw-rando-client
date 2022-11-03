#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListMatchmakingQueuesResult {
        inline app::ListMatchmakingQueuesResult__Class** type_info = (app::ListMatchmakingQueuesResult__Class**)(modloader::win::memory::resolve_rva(0x047921E0));
        inline app::ListMatchmakingQueuesResult__Class* get_class() {
            return il2cpp::get_class<app::ListMatchmakingQueuesResult__Class>(type_info, "PlayFab.MultiplayerModels", "ListMatchmakingQueuesResult");
        }
        inline app::ListMatchmakingQueuesResult* create() {
            return il2cpp::create_object<app::ListMatchmakingQueuesResult>(get_class());
        }
    } // namespace ListMatchmakingQueuesResult
} // namespace app::classes::types
