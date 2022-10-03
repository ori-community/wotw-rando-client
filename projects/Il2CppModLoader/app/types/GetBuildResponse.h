#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetBuildResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetBuildResponse__Class** type_info;
        inline app::GetBuildResponse__Class* get_class() {
            return il2cpp::get_class<app::GetBuildResponse__Class>(type_info, "PlayFab.MultiplayerModels", "GetBuildResponse");
        }
        inline app::GetBuildResponse* create() {
            return il2cpp::create_object<app::GetBuildResponse>(get_class());
        }
    } // namespace GetBuildResponse
} // namespace app::classes::types
