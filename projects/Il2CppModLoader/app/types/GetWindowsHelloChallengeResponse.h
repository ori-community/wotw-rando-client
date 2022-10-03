#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetWindowsHelloChallengeResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetWindowsHelloChallengeResponse__Class** type_info;
        inline app::GetWindowsHelloChallengeResponse__Class* get_class() {
            return il2cpp::get_class<app::GetWindowsHelloChallengeResponse__Class>(type_info, "PlayFab.ClientModels", "GetWindowsHelloChallengeResponse");
        }
        inline app::GetWindowsHelloChallengeResponse* create() {
            return il2cpp::create_object<app::GetWindowsHelloChallengeResponse>(get_class());
        }
    } // namespace GetWindowsHelloChallengeResponse
} // namespace app::classes::types
