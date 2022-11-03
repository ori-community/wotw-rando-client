#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1 {
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class** type_info = (app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0478DA70));
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromFacebookInstantGamesIdsRequest");
        }
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1
} // namespace app::classes::types
