#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetGlobalPolicyResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetGlobalPolicyResponse__Class** type_info;
        inline app::GetGlobalPolicyResponse__Class* get_class() {
            return il2cpp::get_class<app::GetGlobalPolicyResponse__Class>(type_info, "PlayFab.ProfilesModels", "GetGlobalPolicyResponse");
        }
        inline app::GetGlobalPolicyResponse* create() {
            return il2cpp::create_object<app::GetGlobalPolicyResponse>(get_class());
        }
    } // namespace GetGlobalPolicyResponse
} // namespace app::classes::types
