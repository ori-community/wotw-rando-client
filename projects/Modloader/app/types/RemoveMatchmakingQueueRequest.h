#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoveMatchmakingQueueRequest__Class.h>
#include <Modloader/app/structs/RemoveMatchmakingQueueRequest.h>

namespace app::classes::types {
    namespace RemoveMatchmakingQueueRequest {
        inline app::RemoveMatchmakingQueueRequest__Class** type_info = (app::RemoveMatchmakingQueueRequest__Class**)(modloader::win::memory::resolve_rva(0x0471EFD0));
        inline app::RemoveMatchmakingQueueRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveMatchmakingQueueRequest__Class>(type_info, "PlayFab.MultiplayerModels", "RemoveMatchmakingQueueRequest");
        }
        inline app::RemoveMatchmakingQueueRequest* create() {
            return il2cpp::create_object<app::RemoveMatchmakingQueueRequest>(get_class());
        }
    } // namespace RemoveMatchmakingQueueRequest
} // namespace app::classes::types
