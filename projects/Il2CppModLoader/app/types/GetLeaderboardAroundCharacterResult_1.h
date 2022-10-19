#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundCharacterResult_1 {
        inline app::GetLeaderboardAroundCharacterResult_1__Class** type_info = (app::GetLeaderboardAroundCharacterResult_1__Class**)(modloader::win::memory::resolve_rva(0x047938D8));
        inline app::GetLeaderboardAroundCharacterResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundCharacterResult_1__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardAroundCharacterResult");
        }
        inline app::GetLeaderboardAroundCharacterResult_1* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundCharacterResult_1>(get_class());
        }
    } // namespace GetLeaderboardAroundCharacterResult_1
} // namespace app::classes::types
