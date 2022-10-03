#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetBuildRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetBuildRequest__Class** type_info;
        inline app::GetBuildRequest__Class* get_class() {
            return il2cpp::get_class<app::GetBuildRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetBuildRequest");
        }
        inline app::GetBuildRequest* create() {
            return il2cpp::create_object<app::GetBuildRequest>(get_class());
        }
    } // namespace GetBuildRequest
} // namespace app::classes::types
