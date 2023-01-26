#pragma once
#include <Modloader/app/structs/SetEntityProfilePolicyResponse.h>
#include <Modloader/app/structs/SetEntityProfilePolicyResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetEntityProfilePolicyResponse {
        inline app::SetEntityProfilePolicyResponse__Class** type_info() {
            static app::SetEntityProfilePolicyResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetEntityProfilePolicyResponse__Class**)(modloader::win::memory::resolve_rva(0x04762B50));
            }
            return cache;
        }
        inline app::SetEntityProfilePolicyResponse__Class* get_class() {
            return il2cpp::get_class<app::SetEntityProfilePolicyResponse__Class>(type_info(), "PlayFab.ProfilesModels", "SetEntityProfilePolicyResponse");
        }
        inline app::SetEntityProfilePolicyResponse* create() {
            return il2cpp::create_object<app::SetEntityProfilePolicyResponse>(get_class());
        }
    } // namespace SetEntityProfilePolicyResponse
} // namespace app::classes::types
