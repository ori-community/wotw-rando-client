#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetGlobalPolicyRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetGlobalPolicyRequest__Class** type_info;
        inline app::GetGlobalPolicyRequest__Class* get_class() {
            return il2cpp::get_class<app::GetGlobalPolicyRequest__Class>(type_info, "PlayFab.ProfilesModels", "GetGlobalPolicyRequest");
        }
        inline app::GetGlobalPolicyRequest* create() {
            return il2cpp::create_object<app::GetGlobalPolicyRequest>(get_class());
        }
    } // namespace GetGlobalPolicyRequest
} // namespace app::classes::types
