#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetCharacterLeaderboardRequest__Class.h>
#include <Modloader/app/structs/GetCharacterLeaderboardRequest.h>

namespace app::classes::types {
    namespace GetCharacterLeaderboardRequest {
        inline app::GetCharacterLeaderboardRequest__Class** type_info = (app::GetCharacterLeaderboardRequest__Class**)(modloader::win::memory::resolve_rva(0x04794B00));
        inline app::GetCharacterLeaderboardRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterLeaderboardRequest__Class>(type_info, "PlayFab.ClientModels", "GetCharacterLeaderboardRequest");
        }
        inline app::GetCharacterLeaderboardRequest* create() {
            return il2cpp::create_object<app::GetCharacterLeaderboardRequest>(get_class());
        }
    } // namespace GetCharacterLeaderboardRequest
} // namespace app::classes::types
