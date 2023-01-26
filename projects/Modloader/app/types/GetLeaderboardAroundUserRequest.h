#pragma once
#include <Modloader/app/structs/GetLeaderboardAroundUserRequest.h>
#include <Modloader/app/structs/GetLeaderboardAroundUserRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundUserRequest {
        inline app::GetLeaderboardAroundUserRequest__Class** type_info() {
            static app::GetLeaderboardAroundUserRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLeaderboardAroundUserRequest__Class**)(modloader::win::memory::resolve_rva(0x04729500));
            }
            return cache;
        }
        inline app::GetLeaderboardAroundUserRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundUserRequest__Class>(type_info(), "PlayFab.ServerModels", "GetLeaderboardAroundUserRequest");
        }
        inline app::GetLeaderboardAroundUserRequest* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundUserRequest>(get_class());
        }
    } // namespace GetLeaderboardAroundUserRequest
} // namespace app::classes::types
