#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerJoinedRequest {
        inline app::PlayerJoinedRequest__Class** type_info = (app::PlayerJoinedRequest__Class**)(modloader::win::memory::resolve_rva(0x047420A8));
        inline app::PlayerJoinedRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayerJoinedRequest__Class>(type_info, "PlayFab.MatchmakerModels", "PlayerJoinedRequest");
        }
        inline app::PlayerJoinedRequest* create() {
            return il2cpp::create_object<app::PlayerJoinedRequest>(get_class());
        }
    } // namespace PlayerJoinedRequest
} // namespace app::classes::types
