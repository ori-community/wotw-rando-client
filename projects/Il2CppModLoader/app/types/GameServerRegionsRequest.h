#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameServerRegionsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameServerRegionsRequest__Class** type_info;
        inline app::GameServerRegionsRequest__Class* get_class() {
            return il2cpp::get_class<app::GameServerRegionsRequest__Class>(type_info, "PlayFab.ClientModels", "GameServerRegionsRequest");
        }
        inline app::GameServerRegionsRequest* create() {
            return il2cpp::create_object<app::GameServerRegionsRequest>(get_class());
        }
    } // namespace GameServerRegionsRequest
} // namespace app::classes::types
