#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsResult__Class.h>
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsResult.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromXboxLiveIDsResult {
        inline app::GetPlayFabIDsFromXboxLiveIDsResult__Class** type_info = (app::GetPlayFabIDsFromXboxLiveIDsResult__Class**)(modloader::win::memory::resolve_rva(0x04767F30));
        inline app::GetPlayFabIDsFromXboxLiveIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromXboxLiveIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromXboxLiveIDsResult");
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromXboxLiveIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromXboxLiveIDsResult
} // namespace app::classes::types
