#pragma once
#include <Modloader/app/structs/GetLeaderboardAroundCharacterResult_1.h>
#include <Modloader/app/structs/GetLeaderboardAroundCharacterResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundCharacterResult_1 {
        inline app::GetLeaderboardAroundCharacterResult_1__Class** type_info() {
            static app::GetLeaderboardAroundCharacterResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLeaderboardAroundCharacterResult_1__Class**)(modloader::win::memory::resolve_rva(0x047938D8));
            }
            return cache;
        }
        inline app::GetLeaderboardAroundCharacterResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundCharacterResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetLeaderboardAroundCharacterResult");
        }
        inline app::GetLeaderboardAroundCharacterResult_1* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundCharacterResult_1>(get_class());
        }
    } // namespace GetLeaderboardAroundCharacterResult_1
} // namespace app::classes::types
