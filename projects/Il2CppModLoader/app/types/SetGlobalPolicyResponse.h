#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetGlobalPolicyResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetGlobalPolicyResponse__Class** type_info;
        inline app::SetGlobalPolicyResponse__Class* get_class() {
            return il2cpp::get_class<app::SetGlobalPolicyResponse__Class>(type_info, "PlayFab.ProfilesModels", "SetGlobalPolicyResponse");
        }
        inline app::SetGlobalPolicyResponse* create() {
            return il2cpp::create_object<app::SetGlobalPolicyResponse>(get_class());
        }
    } // namespace SetGlobalPolicyResponse
} // namespace app::classes::types
