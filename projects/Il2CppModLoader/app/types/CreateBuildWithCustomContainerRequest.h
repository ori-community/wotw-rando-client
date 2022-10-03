#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateBuildWithCustomContainerRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateBuildWithCustomContainerRequest__Class** type_info;
        inline app::CreateBuildWithCustomContainerRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateBuildWithCustomContainerRequest__Class>(type_info, "PlayFab.MultiplayerModels", "CreateBuildWithCustomContainerRequest");
        }
        inline app::CreateBuildWithCustomContainerRequest* create() {
            return il2cpp::create_object<app::CreateBuildWithCustomContainerRequest>(get_class());
        }
    } // namespace CreateBuildWithCustomContainerRequest
} // namespace app::classes::types
