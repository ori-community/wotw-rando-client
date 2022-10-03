#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateBuildWithManagedContainerRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateBuildWithManagedContainerRequest__Class** type_info;
        inline app::CreateBuildWithManagedContainerRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithManagedContainerRequest__Class>(type_info, "PlayFab.MultiplayerModels", "CreateBuildWithManagedContainerRequest");
        }
        inline app::CreateBuildWithManagedContainerRequest* create() {
            return il2cpp::create_object<app::CreateBuildWithManagedContainerRequest>(get_class());
        }
    } // namespace CreateBuildWithManagedContainerRequest
} // namespace app::classes::types
