#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateBuildRegionsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateBuildRegionsRequest__Class** type_info;
        inline app::UpdateBuildRegionsRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateBuildRegionsRequest__Class>(type_info, "PlayFab.MultiplayerModels", "UpdateBuildRegionsRequest");
        }
        inline app::UpdateBuildRegionsRequest* create() {
            return il2cpp::create_object<app::UpdateBuildRegionsRequest>(get_class());
        }
    } // namespace UpdateBuildRegionsRequest
} // namespace app::classes::types
