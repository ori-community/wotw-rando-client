#pragma once
#include <Modloader/app/structs/GetWindowsHelloChallengeRequest.h>
#include <Modloader/app/structs/GetWindowsHelloChallengeRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetWindowsHelloChallengeRequest {
        inline app::GetWindowsHelloChallengeRequest__Class** type_info() {
            static app::GetWindowsHelloChallengeRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetWindowsHelloChallengeRequest__Class**)(modloader::win::memory::resolve_rva(0x047819D8));
            }
            return cache;
        }
        inline app::GetWindowsHelloChallengeRequest__Class* get_class() {
            return il2cpp::get_class<app::GetWindowsHelloChallengeRequest__Class>(type_info(), "PlayFab.ClientModels", "GetWindowsHelloChallengeRequest");
        }
        inline app::GetWindowsHelloChallengeRequest* create() {
            return il2cpp::create_object<app::GetWindowsHelloChallengeRequest>(get_class());
        }
    } // namespace GetWindowsHelloChallengeRequest
} // namespace app::classes::types
