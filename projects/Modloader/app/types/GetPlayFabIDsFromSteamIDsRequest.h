#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromSteamIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromSteamIDsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromSteamIDsRequest {
        inline app::GetPlayFabIDsFromSteamIDsRequest__Class** type_info() {
            static app::GetPlayFabIDsFromSteamIDsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromSteamIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04723A10));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromSteamIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromSteamIDsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromSteamIDsRequest");
        }
        inline app::GetPlayFabIDsFromSteamIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromSteamIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromSteamIDsRequest
} // namespace app::classes::types
