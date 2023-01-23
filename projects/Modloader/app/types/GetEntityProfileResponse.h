#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetEntityProfileResponse__Class.h>
#include <Modloader/app/structs/GetEntityProfileResponse.h>

namespace app::classes::types {
    namespace GetEntityProfileResponse {
        inline app::GetEntityProfileResponse__Class** type_info = (app::GetEntityProfileResponse__Class**)(modloader::win::memory::resolve_rva(0x0472A5F0));
        inline app::GetEntityProfileResponse__Class* get_class() {
            return il2cpp::get_class<app::GetEntityProfileResponse__Class>(type_info, "PlayFab.ProfilesModels", "GetEntityProfileResponse");
        }
        inline app::GetEntityProfileResponse* create() {
            return il2cpp::create_object<app::GetEntityProfileResponse>(get_class());
        }
    } // namespace GetEntityProfileResponse
} // namespace app::classes::types
