#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsRequest__Class.h>
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsRequest.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromXboxLiveIDsRequest {
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest__Class** type_info = (app::GetPlayFabIDsFromXboxLiveIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04710540));
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromXboxLiveIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromXboxLiveIDsRequest");
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromXboxLiveIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromXboxLiveIDsRequest
} // namespace app::classes::types
