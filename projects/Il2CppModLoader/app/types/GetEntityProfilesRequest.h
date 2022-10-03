#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetEntityProfilesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetEntityProfilesRequest__Class** type_info;
        inline app::GetEntityProfilesRequest__Class* get_class() {
            return il2cpp::get_class<app::GetEntityProfilesRequest__Class>(type_info, "PlayFab.ProfilesModels", "GetEntityProfilesRequest");
        }
        inline app::GetEntityProfilesRequest* create() {
            return il2cpp::create_object<app::GetEntityProfilesRequest>(get_class());
        }
    } // namespace GetEntityProfilesRequest
} // namespace app::classes::types
