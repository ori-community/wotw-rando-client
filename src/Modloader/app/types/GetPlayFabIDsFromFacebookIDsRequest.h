#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookIDsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookIDsRequest {
        inline app::GetPlayFabIDsFromFacebookIDsRequest__Class** type_info() {
            static app::GetPlayFabIDsFromFacebookIDsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromFacebookIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04708CF8));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromFacebookIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookIDsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookIDsRequest");
        }
        inline app::GetPlayFabIDsFromFacebookIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookIDsRequest
} // namespace app::classes::types
