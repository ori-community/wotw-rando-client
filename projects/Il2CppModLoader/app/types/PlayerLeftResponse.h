#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerLeftResponse {
        inline app::PlayerLeftResponse__Class** type_info = (app::PlayerLeftResponse__Class**)(modloader::win::memory::resolve_rva(0x0476C0A8));
        inline app::PlayerLeftResponse__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeftResponse__Class>(type_info, "PlayFab.MatchmakerModels", "PlayerLeftResponse");
        }
        inline app::PlayerLeftResponse* create() {
            return il2cpp::create_object<app::PlayerLeftResponse>(get_class());
        }
    } // namespace PlayerLeftResponse
} // namespace app::classes::types
