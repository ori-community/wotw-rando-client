#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CurrentGamesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CurrentGamesRequest__Class** type_info;
        inline app::CurrentGamesRequest__Class* get_class() {
            return il2cpp::get_class<app::CurrentGamesRequest__Class>(type_info, "PlayFab.ClientModels", "CurrentGamesRequest");
        }
        inline app::CurrentGamesRequest* create() {
            return il2cpp::create_object<app::CurrentGamesRequest>(get_class());
        }
    } // namespace CurrentGamesRequest
} // namespace app::classes::types
