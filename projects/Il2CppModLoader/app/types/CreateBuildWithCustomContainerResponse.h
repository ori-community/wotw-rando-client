#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateBuildWithCustomContainerResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateBuildWithCustomContainerResponse__Class** type_info;
        inline app::CreateBuildWithCustomContainerResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithCustomContainerResponse__Class>(type_info, "PlayFab.MultiplayerModels", "CreateBuildWithCustomContainerResponse");
        }
        inline app::CreateBuildWithCustomContainerResponse* create() {
            return il2cpp::create_object<app::CreateBuildWithCustomContainerResponse>(get_class());
        }
    } // namespace CreateBuildWithCustomContainerResponse
} // namespace app::classes::types
