#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetEntityProfilePolicyResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetEntityProfilePolicyResponse__Class** type_info;
        inline app::SetEntityProfilePolicyResponse__Class* get_class() {
            return il2cpp::get_class<app::SetEntityProfilePolicyResponse__Class>(type_info, "PlayFab.ProfilesModels", "SetEntityProfilePolicyResponse");
        }
        inline app::SetEntityProfilePolicyResponse* create() {
            return il2cpp::create_object<app::SetEntityProfilePolicyResponse>(get_class());
        }
    } // namespace SetEntityProfilePolicyResponse
} // namespace app::classes::types
