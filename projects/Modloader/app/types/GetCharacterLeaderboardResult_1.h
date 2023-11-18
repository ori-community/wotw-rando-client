#pragma once
#include <Modloader/app/structs/GetCharacterLeaderboardResult_1.h>
#include <Modloader/app/structs/GetCharacterLeaderboardResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCharacterLeaderboardResult_1 {
        inline app::GetCharacterLeaderboardResult_1__Class** type_info() {
            static app::GetCharacterLeaderboardResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCharacterLeaderboardResult_1__Class**)(modloader::win::memory::resolve_rva(0x0473E3F0));
            }
            return cache;
        }
        inline app::GetCharacterLeaderboardResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterLeaderboardResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetCharacterLeaderboardResult");
        }
        inline app::GetCharacterLeaderboardResult_1* create() {
            return il2cpp::create_object<app::GetCharacterLeaderboardResult_1>(get_class());
        }
    } // namespace GetCharacterLeaderboardResult_1
} // namespace app::classes::types
