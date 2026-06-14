#pragma once
#include <Modloader/app/structs/GetLeaderboardAroundCharacterRequest.h>
#include <Modloader/app/structs/GetLeaderboardAroundCharacterRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundCharacterRequest {
        inline app::GetLeaderboardAroundCharacterRequest__Class** type_info() {
            static app::GetLeaderboardAroundCharacterRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLeaderboardAroundCharacterRequest__Class**)(modloader::win::memory::resolve_rva(0x047164C8));
            }
            return cache;
        }
        inline app::GetLeaderboardAroundCharacterRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundCharacterRequest__Class>(type_info(), "PlayFab.ClientModels", "GetLeaderboardAroundCharacterRequest");
        }
        inline app::GetLeaderboardAroundCharacterRequest* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundCharacterRequest>(get_class());
        }
    } // namespace GetLeaderboardAroundCharacterRequest
} // namespace app::classes::types
