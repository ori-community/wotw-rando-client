#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchmakeRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MatchmakeRequest__Class** type_info;
        inline app::MatchmakeRequest__Class* get_class() {
            return il2cpp::get_class<app::MatchmakeRequest__Class>(type_info, "PlayFab.ClientModels", "MatchmakeRequest");
        }
        inline app::MatchmakeRequest* create() {
            return il2cpp::create_object<app::MatchmakeRequest>(get_class());
        }
    } // namespace MatchmakeRequest
} // namespace app::classes::types
