#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetEntityProfilesResponse__Class.h>
#include <Modloader/app/structs/GetEntityProfilesResponse.h>

namespace app::classes::types {
    namespace GetEntityProfilesResponse {
        inline app::GetEntityProfilesResponse__Class** type_info = (app::GetEntityProfilesResponse__Class**)(modloader::win::memory::resolve_rva(0x0478A2B8));
        inline app::GetEntityProfilesResponse__Class* get_class() {
            return il2cpp::get_class<app::GetEntityProfilesResponse__Class>(type_info, "PlayFab.ProfilesModels", "GetEntityProfilesResponse");
        }
        inline app::GetEntityProfilesResponse* create() {
            return il2cpp::create_object<app::GetEntityProfilesResponse>(get_class());
        }
    } // namespace GetEntityProfilesResponse
} // namespace app::classes::types
