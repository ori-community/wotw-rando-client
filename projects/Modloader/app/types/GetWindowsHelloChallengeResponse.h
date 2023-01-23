#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetWindowsHelloChallengeResponse__Class.h>
#include <Modloader/app/structs/GetWindowsHelloChallengeResponse.h>

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
