#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetLeaderboardAroundCharacterResult__Class.h>
#include <Modloader/app/structs/GetLeaderboardAroundCharacterResult.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundCharacterResult {
        inline app::GetLeaderboardAroundCharacterResult__Class** type_info = (app::GetLeaderboardAroundCharacterResult__Class**)(modloader::win::memory::resolve_rva(0x047248A0));
        inline app::GetLeaderboardAroundCharacterResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundCharacterResult__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardAroundCharacterResult");
        }
        inline app::GetLeaderboardAroundCharacterResult* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundCharacterResult>(get_class());
        }
    } // namespace GetLeaderboardAroundCharacterResult
} // namespace app::classes::types
