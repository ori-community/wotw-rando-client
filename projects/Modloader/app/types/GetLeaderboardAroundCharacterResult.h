#pragma once
#include <Modloader/app/structs/GetLeaderboardAroundCharacterResult.h>
#include <Modloader/app/structs/GetLeaderboardAroundCharacterResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundCharacterResult {
        inline app::GetLeaderboardAroundCharacterResult__Class** type_info() {
            static app::GetLeaderboardAroundCharacterResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLeaderboardAroundCharacterResult__Class**)(modloader::win::memory::resolve_rva(0x047248A0));
            }
            return cache;
        }
        inline app::GetLeaderboardAroundCharacterResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundCharacterResult__Class>(type_info(), "PlayFab.ClientModels", "GetLeaderboardAroundCharacterResult");
        }
        inline app::GetLeaderboardAroundCharacterResult* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundCharacterResult>(get_class());
        }
    } // namespace GetLeaderboardAroundCharacterResult
} // namespace app::classes::types
