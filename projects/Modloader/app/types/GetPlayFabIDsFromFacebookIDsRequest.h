#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookIDsRequest {
        inline app::GetPlayFabIDsFromFacebookIDsRequest__Class** type_info = (app::GetPlayFabIDsFromFacebookIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04708CF8));
        inline app::GetPlayFabIDsFromFacebookIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookIDsRequest");
        }
        inline app::GetPlayFabIDsFromFacebookIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookIDsRequest
} // namespace app::classes::types
