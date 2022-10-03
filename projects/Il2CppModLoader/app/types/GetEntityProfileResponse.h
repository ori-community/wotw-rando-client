#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetEntityProfileResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetEntityProfileResponse__Class** type_info;
        inline app::GetEntityProfileResponse__Class* get_class() {
            return il2cpp::get_class<app::GetEntityProfileResponse__Class>(type_info, "PlayFab.ProfilesModels", "GetEntityProfileResponse");
        }
        inline app::GetEntityProfileResponse* create() {
            return il2cpp::create_object<app::GetEntityProfileResponse>(get_class());
        }
    } // namespace GetEntityProfileResponse
} // namespace app::classes::types
