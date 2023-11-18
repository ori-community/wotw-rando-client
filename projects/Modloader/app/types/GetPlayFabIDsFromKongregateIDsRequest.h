#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromKongregateIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromKongregateIDsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromKongregateIDsRequest {
        inline app::GetPlayFabIDsFromKongregateIDsRequest__Class** type_info() {
            static app::GetPlayFabIDsFromKongregateIDsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromKongregateIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04735168));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromKongregateIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromKongregateIDsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromKongregateIDsRequest");
        }
        inline app::GetPlayFabIDsFromKongregateIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromKongregateIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromKongregateIDsRequest
} // namespace app::classes::types
