#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromSteamIDsRequest_1 {
        inline app::GetPlayFabIDsFromSteamIDsRequest_1__Class** type_info = (app::GetPlayFabIDsFromSteamIDsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0477F818));
        inline app::GetPlayFabIDsFromSteamIDsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromSteamIDsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromSteamIDsRequest");
        }
        inline app::GetPlayFabIDsFromSteamIDsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromSteamIDsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromSteamIDsRequest_1
} // namespace app::classes::types
