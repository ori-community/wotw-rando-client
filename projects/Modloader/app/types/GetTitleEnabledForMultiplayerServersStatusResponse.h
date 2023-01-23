#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetTitleEnabledForMultiplayerServersStatusResponse__Class.h>
#include <Modloader/app/structs/GetTitleEnabledForMultiplayerServersStatusResponse.h>

namespace app::classes::types {
    namespace GetTitleEnabledForMultiplayerServersStatusResponse {
        inline app::GetTitleEnabledForMultiplayerServersStatusResponse__Class** type_info = (app::GetTitleEnabledForMultiplayerServersStatusResponse__Class**)(modloader::win::memory::resolve_rva(0x04746988));
        inline app::GetTitleEnabledForMultiplayerServersStatusResponse__Class* get_class() {
            return il2cpp::get_class<app::GetTitleEnabledForMultiplayerServersStatusResponse__Class>(type_info, "PlayFab.MultiplayerModels", "GetTitleEnabledForMultiplayerServersStatusResponse");
        }
        inline app::GetTitleEnabledForMultiplayerServersStatusResponse* create() {
            return il2cpp::create_object<app::GetTitleEnabledForMultiplayerServersStatusResponse>(get_class());
        }
    } // namespace GetTitleEnabledForMultiplayerServersStatusResponse
} // namespace app::classes::types
