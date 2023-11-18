#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsRequest_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromPSNAccountIDsRequest_1 {
        inline app::GetPlayFabIDsFromPSNAccountIDsRequest_1__Class** type_info() {
            static app::GetPlayFabIDsFromPSNAccountIDsRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromPSNAccountIDsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04740A98));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromPSNAccountIDsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromPSNAccountIDsRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayFabIDsFromPSNAccountIDsRequest");
        }
        inline app::GetPlayFabIDsFromPSNAccountIDsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromPSNAccountIDsRequest_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromPSNAccountIDsRequest_1
} // namespace app::classes::types
