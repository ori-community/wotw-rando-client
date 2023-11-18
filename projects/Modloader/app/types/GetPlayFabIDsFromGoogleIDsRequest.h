#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromGoogleIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromGoogleIDsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGoogleIDsRequest {
        inline app::GetPlayFabIDsFromGoogleIDsRequest__Class** type_info() {
            static app::GetPlayFabIDsFromGoogleIDsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromGoogleIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04758DF0));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromGoogleIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGoogleIDsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromGoogleIDsRequest");
        }
        inline app::GetPlayFabIDsFromGoogleIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGoogleIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromGoogleIDsRequest
} // namespace app::classes::types
