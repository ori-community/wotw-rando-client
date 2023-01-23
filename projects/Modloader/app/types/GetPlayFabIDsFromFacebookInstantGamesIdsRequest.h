#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Class.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookInstantGamesIdsRequest.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookInstantGamesIdsRequest {
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Class** type_info = (app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Class**)(modloader::win::memory::resolve_rva(0x04733BF0));
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookInstantGamesIdsRequest");
        }
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookInstantGamesIdsRequest
} // namespace app::classes::types
