#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsRequest_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromXboxLiveIDsRequest_1 {
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class** type_info() {
            static app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047591B0));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayFabIDsFromXboxLiveIDsRequest");
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromXboxLiveIDsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromXboxLiveIDsRequest_1
} // namespace app::classes::types
