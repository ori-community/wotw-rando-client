#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetEntityProfilePolicyResponse__Class.h>
#include <Modloader/app/structs/SetEntityProfilePolicyResponse.h>

namespace app::classes::types {
    namespace SetEntityProfilePolicyResponse {
        inline app::SetEntityProfilePolicyResponse__Class** type_info = (app::SetEntityProfilePolicyResponse__Class**)(modloader::win::memory::resolve_rva(0x04762B50));
        inline app::SetEntityProfilePolicyResponse__Class* get_class() {
            return il2cpp::get_class<app::SetEntityProfilePolicyResponse__Class>(type_info, "PlayFab.ProfilesModels", "SetEntityProfilePolicyResponse");
        }
        inline app::SetEntityProfilePolicyResponse* create() {
            return il2cpp::create_object<app::SetEntityProfilePolicyResponse>(get_class());
        }
    } // namespace SetEntityProfilePolicyResponse
} // namespace app::classes::types
