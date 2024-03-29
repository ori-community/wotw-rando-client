#pragma once
#include <Modloader/app/structs/GetCharacterLeaderboardResult.h>
#include <Modloader/app/structs/GetCharacterLeaderboardResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCharacterLeaderboardResult {
        inline app::GetCharacterLeaderboardResult__Class** type_info() {
            static app::GetCharacterLeaderboardResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCharacterLeaderboardResult__Class**)(modloader::win::memory::resolve_rva(0x04728108));
            }
            return cache;
        }
        inline app::GetCharacterLeaderboardResult__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterLeaderboardResult__Class>(type_info(), "PlayFab.ClientModels", "GetCharacterLeaderboardResult");
        }
        inline app::GetCharacterLeaderboardResult* create() {
            return il2cpp::create_object<app::GetCharacterLeaderboardResult>(get_class());
        }
    } // namespace GetCharacterLeaderboardResult
} // namespace app::classes::types
