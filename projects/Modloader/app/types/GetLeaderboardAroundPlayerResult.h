#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundPlayerResult {
        inline app::GetLeaderboardAroundPlayerResult__Class** type_info = (app::GetLeaderboardAroundPlayerResult__Class**)(modloader::win::memory::resolve_rva(0x047725E0));
        inline app::GetLeaderboardAroundPlayerResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundPlayerResult__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardAroundPlayerResult");
        }
        inline app::GetLeaderboardAroundPlayerResult* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundPlayerResult>(get_class());
        }
    } // namespace GetLeaderboardAroundPlayerResult
} // namespace app::classes::types
