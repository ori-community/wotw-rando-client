#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerLeftRequest {
        inline app::PlayerLeftRequest__Class** type_info = (app::PlayerLeftRequest__Class**)(modloader::win::memory::resolve_rva(0x0476E090));
        inline app::PlayerLeftRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeftRequest__Class>(type_info, "PlayFab.MatchmakerModels", "PlayerLeftRequest");
        }
        inline app::PlayerLeftRequest* create() {
            return il2cpp::create_object<app::PlayerLeftRequest>(get_class());
        }
    } // namespace PlayerLeftRequest
} // namespace app::classes::types
