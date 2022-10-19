#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetLeaderboardResult {
        inline app::GetLeaderboardResult__Class** type_info = (app::GetLeaderboardResult__Class**)(modloader::win::memory::resolve_rva(0x04762738));
        inline app::GetLeaderboardResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardResult__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardResult");
        }
        inline app::GetLeaderboardResult* create() {
            return il2cpp::create_object<app::GetLeaderboardResult>(get_class());
        }
    } // namespace GetLeaderboardResult
} // namespace app::classes::types
