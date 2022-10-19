#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetWindowsHelloChallengeResponse {
        inline app::GetWindowsHelloChallengeResponse__Class** type_info = (app::GetWindowsHelloChallengeResponse__Class**)(modloader::win::memory::resolve_rva(0x04785D28));
        inline app::GetWindowsHelloChallengeResponse__Class* get_class() {
            return il2cpp::get_class<app::GetWindowsHelloChallengeResponse__Class>(type_info, "PlayFab.ClientModels", "GetWindowsHelloChallengeResponse");
        }
        inline app::GetWindowsHelloChallengeResponse* create() {
            return il2cpp::create_object<app::GetWindowsHelloChallengeResponse>(get_class());
        }
    } // namespace GetWindowsHelloChallengeResponse
} // namespace app::classes::types
