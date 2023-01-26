#pragma once
#include <Modloader/app/structs/GetWindowsHelloChallengeResponse.h>
#include <Modloader/app/structs/GetWindowsHelloChallengeResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetWindowsHelloChallengeResponse {
        inline app::GetWindowsHelloChallengeResponse__Class** type_info() {
            static app::GetWindowsHelloChallengeResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetWindowsHelloChallengeResponse__Class**)(modloader::win::memory::resolve_rva(0x04785D28));
            }
            return cache;
        }
        inline app::GetWindowsHelloChallengeResponse__Class* get_class() {
            return il2cpp::get_class<app::GetWindowsHelloChallengeResponse__Class>(type_info(), "PlayFab.ClientModels", "GetWindowsHelloChallengeResponse");
        }
        inline app::GetWindowsHelloChallengeResponse* create() {
            return il2cpp::create_object<app::GetWindowsHelloChallengeResponse>(get_class());
        }
    } // namespace GetWindowsHelloChallengeResponse
} // namespace app::classes::types
