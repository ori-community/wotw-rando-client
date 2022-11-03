#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookInstantGamesIdsResult {
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsResult__Class** type_info = (app::GetPlayFabIDsFromFacebookInstantGamesIdsResult__Class**)(modloader::win::memory::resolve_rva(0x0476DEA0));
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookInstantGamesIdsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookInstantGamesIdsResult");
        }
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookInstantGamesIdsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookInstantGamesIdsResult
} // namespace app::classes::types
