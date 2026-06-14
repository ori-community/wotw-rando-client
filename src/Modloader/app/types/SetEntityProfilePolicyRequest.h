#pragma once
#include <Modloader/app/structs/SetEntityProfilePolicyRequest.h>
#include <Modloader/app/structs/SetEntityProfilePolicyRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetEntityProfilePolicyRequest {
        inline app::SetEntityProfilePolicyRequest__Class** type_info() {
            static app::SetEntityProfilePolicyRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetEntityProfilePolicyRequest__Class**)(modloader::win::memory::resolve_rva(0x0478B000));
            }
            return cache;
        }
        inline app::SetEntityProfilePolicyRequest__Class* get_class() {
            return il2cpp::get_class<app::SetEntityProfilePolicyRequest__Class>(type_info(), "PlayFab.ProfilesModels", "SetEntityProfilePolicyRequest");
        }
        inline app::SetEntityProfilePolicyRequest* create() {
            return il2cpp::create_object<app::SetEntityProfilePolicyRequest>(get_class());
        }
    } // namespace SetEntityProfilePolicyRequest
} // namespace app::classes::types
