#pragma once
#include <Modloader/app/structs/GetLeaderboardAroundPlayerResult.h>
#include <Modloader/app/structs/GetLeaderboardAroundPlayerResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundPlayerResult {
        inline app::GetLeaderboardAroundPlayerResult__Class** type_info() {
            static app::GetLeaderboardAroundPlayerResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLeaderboardAroundPlayerResult__Class**)(modloader::win::memory::resolve_rva(0x047725E0));
            }
            return cache;
        }
        inline app::GetLeaderboardAroundPlayerResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundPlayerResult__Class>(type_info(), "PlayFab.ClientModels", "GetLeaderboardAroundPlayerResult");
        }
        inline app::GetLeaderboardAroundPlayerResult* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundPlayerResult>(get_class());
        }
    } // namespace GetLeaderboardAroundPlayerResult
} // namespace app::classes::types
