#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetLeaderboardRequest__Class.h>
#include <Modloader/app/structs/GetLeaderboardRequest.h>

namespace app::classes::types {
    namespace GetLeaderboardRequest {
        inline app::GetLeaderboardRequest__Class** type_info = (app::GetLeaderboardRequest__Class**)(modloader::win::memory::resolve_rva(0x0475F088));
        inline app::GetLeaderboardRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardRequest__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardRequest");
        }
        inline app::GetLeaderboardRequest* create() {
            return il2cpp::create_object<app::GetLeaderboardRequest>(get_class());
        }
    } // namespace GetLeaderboardRequest
} // namespace app::classes::types
