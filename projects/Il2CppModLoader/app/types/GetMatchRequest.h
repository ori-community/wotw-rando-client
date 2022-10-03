#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetMatchRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetMatchRequest__Class** type_info;
        inline app::GetMatchRequest__Class* get_class() {
            return il2cpp::get_class<app::GetMatchRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetMatchRequest");
        }
        inline app::GetMatchRequest* create() {
            return il2cpp::create_object<app::GetMatchRequest>(get_class());
        }
    } // namespace GetMatchRequest
} // namespace app::classes::types
