#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromSteamIDsResult.h>
#include <Modloader/app/structs/GetPlayFabIDsFromSteamIDsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromSteamIDsResult {
        inline app::GetPlayFabIDsFromSteamIDsResult__Class** type_info() {
            static app::GetPlayFabIDsFromSteamIDsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromSteamIDsResult__Class**)(modloader::win::memory::resolve_rva(0x04736E50));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromSteamIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromSteamIDsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromSteamIDsResult");
        }
        inline app::GetPlayFabIDsFromSteamIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromSteamIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromSteamIDsResult
} // namespace app::classes::types
