#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromGenericIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromGenericIDsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGenericIDsRequest {
        inline app::GetPlayFabIDsFromGenericIDsRequest__Class** type_info() {
            static app::GetPlayFabIDsFromGenericIDsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromGenericIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04796588));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromGenericIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGenericIDsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromGenericIDsRequest");
        }
        inline app::GetPlayFabIDsFromGenericIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGenericIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromGenericIDsRequest
} // namespace app::classes::types
