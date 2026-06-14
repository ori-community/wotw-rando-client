#pragma once
#include <Modloader/app/structs/GetLeaderboardAroundUserResult.h>
#include <Modloader/app/structs/GetLeaderboardAroundUserResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundUserResult {
        inline app::GetLeaderboardAroundUserResult__Class** type_info() {
            static app::GetLeaderboardAroundUserResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLeaderboardAroundUserResult__Class**)(modloader::win::memory::resolve_rva(0x04738A00));
            }
            return cache;
        }
        inline app::GetLeaderboardAroundUserResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundUserResult__Class>(type_info(), "PlayFab.ServerModels", "GetLeaderboardAroundUserResult");
        }
        inline app::GetLeaderboardAroundUserResult* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundUserResult>(get_class());
        }
    } // namespace GetLeaderboardAroundUserResult
} // namespace app::classes::types
