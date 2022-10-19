#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundUserResult {
        inline app::GetLeaderboardAroundUserResult__Class** type_info = (app::GetLeaderboardAroundUserResult__Class**)(modloader::win::memory::resolve_rva(0x04738A00));
        inline app::GetLeaderboardAroundUserResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundUserResult__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardAroundUserResult");
        }
        inline app::GetLeaderboardAroundUserResult* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundUserResult>(get_class());
        }
    } // namespace GetLeaderboardAroundUserResult
} // namespace app::classes::types
