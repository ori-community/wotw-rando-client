#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundCharacterRequest_1 {
        inline app::GetLeaderboardAroundCharacterRequest_1__Class** type_info = (app::GetLeaderboardAroundCharacterRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04725718));
        inline app::GetLeaderboardAroundCharacterRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundCharacterRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardAroundCharacterRequest");
        }
        inline app::GetLeaderboardAroundCharacterRequest_1* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundCharacterRequest_1>(get_class());
        }
    } // namespace GetLeaderboardAroundCharacterRequest_1
} // namespace app::classes::types
