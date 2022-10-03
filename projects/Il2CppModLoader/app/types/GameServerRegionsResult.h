#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameServerRegionsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameServerRegionsResult__Class** type_info;
        inline app::GameServerRegionsResult__Class* get_class() {
            return il2cpp::get_class<app::GameServerRegionsResult__Class>(type_info, "PlayFab.ClientModels", "GameServerRegionsResult");
        }
        inline app::GameServerRegionsResult* create() {
            return il2cpp::create_object<app::GameServerRegionsResult>(get_class());
        }
    } // namespace GameServerRegionsResult
} // namespace app::classes::types
