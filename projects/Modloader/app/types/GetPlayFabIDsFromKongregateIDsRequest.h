#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromKongregateIDsRequest {
        inline app::GetPlayFabIDsFromKongregateIDsRequest__Class** type_info = (app::GetPlayFabIDsFromKongregateIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04735168));
        inline app::GetPlayFabIDsFromKongregateIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromKongregateIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromKongregateIDsRequest");
        }
        inline app::GetPlayFabIDsFromKongregateIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromKongregateIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromKongregateIDsRequest
} // namespace app::classes::types
