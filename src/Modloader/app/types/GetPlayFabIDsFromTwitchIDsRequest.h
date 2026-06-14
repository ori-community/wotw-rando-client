#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromTwitchIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromTwitchIDsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromTwitchIDsRequest {
        inline app::GetPlayFabIDsFromTwitchIDsRequest__Class** type_info() {
            static app::GetPlayFabIDsFromTwitchIDsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromTwitchIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04719608));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromTwitchIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromTwitchIDsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromTwitchIDsRequest");
        }
        inline app::GetPlayFabIDsFromTwitchIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromTwitchIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromTwitchIDsRequest
} // namespace app::classes::types
