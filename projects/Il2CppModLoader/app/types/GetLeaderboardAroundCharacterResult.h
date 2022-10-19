#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
