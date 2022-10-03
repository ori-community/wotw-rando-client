#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListAssetSummariesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListAssetSummariesRequest__Class** type_info;
        inline app::ListAssetSummariesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListAssetSummariesRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListAssetSummariesRequest");
        }
        inline app::ListAssetSummariesRequest* create() {
            return il2cpp::create_object<app::ListAssetSummariesRequest>(get_class());
        }
    } // namespace ListAssetSummariesRequest
} // namespace app::classes::types
