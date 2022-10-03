#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetEntityProfilePolicyRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetEntityProfilePolicyRequest__Class** type_info;
        inline app::SetEntityProfilePolicyRequest__Class* get_class() {
            return il2cpp::get_class<app::SetEntityProfilePolicyRequest__Class>(type_info, "PlayFab.ProfilesModels", "SetEntityProfilePolicyRequest");
        }
        inline app::SetEntityProfilePolicyRequest* create() {
            return il2cpp::create_object<app::SetEntityProfilePolicyRequest>(get_class());
        }
    } // namespace SetEntityProfilePolicyRequest
} // namespace app::classes::types
