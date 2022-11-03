#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AuthUserResponse {
        inline app::AuthUserResponse__Class** type_info = (app::AuthUserResponse__Class**)(modloader::win::memory::resolve_rva(0x04786270));
        inline app::AuthUserResponse__Class* get_class() {
            return il2cpp::get_class<app::AuthUserResponse__Class>(type_info, "PlayFab.MatchmakerModels", "AuthUserResponse");
        }
        inline app::AuthUserResponse* create() {
            return il2cpp::create_object<app::AuthUserResponse>(get_class());
        }
    } // namespace AuthUserResponse
} // namespace app::classes::types
