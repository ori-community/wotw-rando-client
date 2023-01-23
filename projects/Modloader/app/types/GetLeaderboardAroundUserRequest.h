#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetLeaderboardAroundUserRequest__Class.h>
#include <Modloader/app/structs/GetLeaderboardAroundUserRequest.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundUserRequest {
        inline app::GetLeaderboardAroundUserRequest__Class** type_info = (app::GetLeaderboardAroundUserRequest__Class**)(modloader::win::memory::resolve_rva(0x04729500));
        inline app::GetLeaderboardAroundUserRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundUserRequest__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardAroundUserRequest");
        }
        inline app::GetLeaderboardAroundUserRequest* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundUserRequest>(get_class());
        }
    } // namespace GetLeaderboardAroundUserRequest
} // namespace app::classes::types
