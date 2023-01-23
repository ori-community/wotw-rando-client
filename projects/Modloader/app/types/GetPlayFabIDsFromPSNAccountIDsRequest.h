#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsRequest__Class.h>
#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsRequest.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromPSNAccountIDsRequest {
        inline app::GetPlayFabIDsFromPSNAccountIDsRequest__Class** type_info = (app::GetPlayFabIDsFromPSNAccountIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04747FC0));
        inline app::GetPlayFabIDsFromPSNAccountIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromPSNAccountIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromPSNAccountIDsRequest");
        }
        inline app::GetPlayFabIDsFromPSNAccountIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromPSNAccountIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromPSNAccountIDsRequest
} // namespace app::classes::types
