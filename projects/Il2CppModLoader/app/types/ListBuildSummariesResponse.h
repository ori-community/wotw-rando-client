#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListBuildSummariesResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListBuildSummariesResponse__Class** type_info;
        inline app::ListBuildSummariesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListBuildSummariesResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListBuildSummariesResponse");
        }
        inline app::ListBuildSummariesResponse* create() {
            return il2cpp::create_object<app::ListBuildSummariesResponse>(get_class());
        }
    } // namespace ListBuildSummariesResponse
} // namespace app::classes::types
