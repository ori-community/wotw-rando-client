#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromGameCenterIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromGameCenterIDsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGameCenterIDsRequest {
        inline app::GetPlayFabIDsFromGameCenterIDsRequest__Class** type_info() {
            static app::GetPlayFabIDsFromGameCenterIDsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromGameCenterIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x0471D6E0));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromGameCenterIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGameCenterIDsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromGameCenterIDsRequest");
        }
        inline app::GetPlayFabIDsFromGameCenterIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGameCenterIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromGameCenterIDsRequest
} // namespace app::classes::types
