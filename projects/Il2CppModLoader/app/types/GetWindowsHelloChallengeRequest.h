#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetWindowsHelloChallengeRequest {
        inline app::GetWindowsHelloChallengeRequest__Class** type_info = (app::GetWindowsHelloChallengeRequest__Class**)(modloader::win::memory::resolve_rva(0x047819D8));
        inline app::GetWindowsHelloChallengeRequest__Class* get_class() {
            return il2cpp::get_class<app::GetWindowsHelloChallengeRequest__Class>(type_info, "PlayFab.ClientModels", "GetWindowsHelloChallengeRequest");
        }
        inline app::GetWindowsHelloChallengeRequest* create() {
            return il2cpp::create_object<app::GetWindowsHelloChallengeRequest>(get_class());
        }
    } // namespace GetWindowsHelloChallengeRequest
} // namespace app::classes::types
