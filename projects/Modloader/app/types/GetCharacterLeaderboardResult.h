#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetCharacterLeaderboardResult {
        inline app::GetCharacterLeaderboardResult__Class** type_info = (app::GetCharacterLeaderboardResult__Class**)(modloader::win::memory::resolve_rva(0x04728108));
        inline app::GetCharacterLeaderboardResult__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterLeaderboardResult__Class>(type_info, "PlayFab.ClientModels", "GetCharacterLeaderboardResult");
        }
        inline app::GetCharacterLeaderboardResult* create() {
            return il2cpp::create_object<app::GetCharacterLeaderboardResult>(get_class());
        }
    } // namespace GetCharacterLeaderboardResult
} // namespace app::classes::types
