#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetGlobalPolicyRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetGlobalPolicyRequest__Class** type_info;
        inline app::SetGlobalPolicyRequest__Class* get_class() {
            return il2cpp::get_class<app::SetGlobalPolicyRequest__Class>(type_info, "PlayFab.ProfilesModels", "SetGlobalPolicyRequest");
        }
        inline app::SetGlobalPolicyRequest* create() {
            return il2cpp::create_object<app::SetGlobalPolicyRequest>(get_class());
        }
    } // namespace SetGlobalPolicyRequest
} // namespace app::classes::types
