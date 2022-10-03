#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityTokenResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityTokenResponse__Class** type_info;
        inline app::EntityTokenResponse__Class* get_class() {
            return il2cpp::get_class<app::EntityTokenResponse__Class>(type_info, "PlayFab.ClientModels", "EntityTokenResponse");
        }
        inline app::EntityTokenResponse* create() {
            return il2cpp::create_object<app::EntityTokenResponse>(get_class());
        }
    } // namespace EntityTokenResponse
} // namespace app::classes::types
