#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListBuildSummariesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListBuildSummariesRequest__Class** type_info;
        inline app::ListBuildSummariesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListBuildSummariesRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListBuildSummariesRequest");
        }
        inline app::ListBuildSummariesRequest* create() {
            return il2cpp::create_object<app::ListBuildSummariesRequest>(get_class());
        }
    } // namespace ListBuildSummariesRequest
} // namespace app::classes::types
