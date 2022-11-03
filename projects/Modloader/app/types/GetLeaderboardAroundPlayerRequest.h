#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundPlayerRequest {
        inline app::GetLeaderboardAroundPlayerRequest__Class** type_info = (app::GetLeaderboardAroundPlayerRequest__Class**)(modloader::win::memory::resolve_rva(0x0474D238));
        inline app::GetLeaderboardAroundPlayerRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundPlayerRequest__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardAroundPlayerRequest");
        }
        inline app::GetLeaderboardAroundPlayerRequest* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundPlayerRequest>(get_class());
        }
    } // namespace GetLeaderboardAroundPlayerRequest
} // namespace app::classes::types
