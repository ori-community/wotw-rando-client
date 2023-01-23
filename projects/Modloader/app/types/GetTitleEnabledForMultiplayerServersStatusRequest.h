#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetTitleEnabledForMultiplayerServersStatusRequest__Class.h>
#include <Modloader/app/structs/GetTitleEnabledForMultiplayerServersStatusRequest.h>

namespace app::classes::types {
    namespace GetTitleEnabledForMultiplayerServersStatusRequest {
        inline app::GetTitleEnabledForMultiplayerServersStatusRequest__Class** type_info = (app::GetTitleEnabledForMultiplayerServersStatusRequest__Class**)(modloader::win::memory::resolve_rva(0x04754C48));
        inline app::GetTitleEnabledForMultiplayerServersStatusRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTitleEnabledForMultiplayerServersStatusRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetTitleEnabledForMultiplayerServersStatusRequest");
        }
        inline app::GetTitleEnabledForMultiplayerServersStatusRequest* create() {
            return il2cpp::create_object<app::GetTitleEnabledForMultiplayerServersStatusRequest>(get_class());
        }
    } // namespace GetTitleEnabledForMultiplayerServersStatusRequest
} // namespace app::classes::types
