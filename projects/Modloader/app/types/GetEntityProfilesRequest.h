#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetEntityProfilesRequest {
        inline app::GetEntityProfilesRequest__Class** type_info = (app::GetEntityProfilesRequest__Class**)(modloader::win::memory::resolve_rva(0x04794988));
        inline app::GetEntityProfilesRequest__Class* get_class() {
            return il2cpp::get_class<app::GetEntityProfilesRequest__Class>(type_info, "PlayFab.ProfilesModels", "GetEntityProfilesRequest");
        }
        inline app::GetEntityProfilesRequest* create() {
            return il2cpp::create_object<app::GetEntityProfilesRequest>(get_class());
        }
    } // namespace GetEntityProfilesRequest
} // namespace app::classes::types
