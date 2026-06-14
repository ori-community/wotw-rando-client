#pragma once
#include <Modloader/app/structs/GetTitleEnabledForMultiplayerServersStatusRequest.h>
#include <Modloader/app/structs/GetTitleEnabledForMultiplayerServersStatusRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTitleEnabledForMultiplayerServersStatusRequest {
        inline app::GetTitleEnabledForMultiplayerServersStatusRequest__Class** type_info() {
            static app::GetTitleEnabledForMultiplayerServersStatusRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTitleEnabledForMultiplayerServersStatusRequest__Class**)(modloader::win::memory::resolve_rva(0x04754C48));
            }
            return cache;
        }
        inline app::GetTitleEnabledForMultiplayerServersStatusRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTitleEnabledForMultiplayerServersStatusRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "GetTitleEnabledForMultiplayerServersStatusRequest");
        }
        inline app::GetTitleEnabledForMultiplayerServersStatusRequest* create() {
            return il2cpp::create_object<app::GetTitleEnabledForMultiplayerServersStatusRequest>(get_class());
        }
    } // namespace GetTitleEnabledForMultiplayerServersStatusRequest
} // namespace app::classes::types
