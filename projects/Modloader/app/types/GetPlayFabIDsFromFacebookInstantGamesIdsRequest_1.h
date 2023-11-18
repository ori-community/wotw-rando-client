#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1 {
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class** type_info() {
            static app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0478DA70));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayFabIDsFromFacebookInstantGamesIdsRequest");
        }
        inline app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1
} // namespace app::classes::types
