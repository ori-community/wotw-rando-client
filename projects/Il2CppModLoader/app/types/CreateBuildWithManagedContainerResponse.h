#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateBuildWithManagedContainerResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateBuildWithManagedContainerResponse__Class** type_info;
        inline app::CreateBuildWithManagedContainerResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithManagedContainerResponse__Class>(type_info, "PlayFab.MultiplayerModels", "CreateBuildWithManagedContainerResponse");
        }
        inline app::CreateBuildWithManagedContainerResponse* create() {
            return il2cpp::create_object<app::CreateBuildWithManagedContainerResponse>(get_class());
        }
    } // namespace CreateBuildWithManagedContainerResponse
} // namespace app::classes::types
