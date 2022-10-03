#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetWindowsHelloChallengeRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetWindowsHelloChallengeRequest__Class** type_info;
        inline app::GetWindowsHelloChallengeRequest__Class* get_class() {
            return il2cpp::get_class<app::GetWindowsHelloChallengeRequest__Class>(type_info, "PlayFab.ClientModels", "GetWindowsHelloChallengeRequest");
        }
        inline app::GetWindowsHelloChallengeRequest* create() {
            return il2cpp::create_object<app::GetWindowsHelloChallengeRequest>(get_class());
        }
    } // namespace GetWindowsHelloChallengeRequest
} // namespace app::classes::types
