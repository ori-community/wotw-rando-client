#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookInstantGamesIdsResult_1__Class.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookInstantGamesIdsResult_1.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookInstantGamesIdsResult_1 {
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsResult_1__Class** type_info = (app::GetPlayFabIDsFromFacebookInstantGamesIdsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04766320));
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookInstantGamesIdsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromFacebookInstantGamesIdsResult");
        }
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsResult_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookInstantGamesIdsResult_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookInstantGamesIdsResult_1
} // namespace app::classes::types
