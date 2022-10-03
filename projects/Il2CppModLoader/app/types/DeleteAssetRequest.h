#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeleteAssetRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeleteAssetRequest__Class** type_info;
        inline app::DeleteAssetRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteAssetRequest__Class>(type_info, "PlayFab.MultiplayerModels", "DeleteAssetRequest");
        }
        inline app::DeleteAssetRequest* create() {
            return il2cpp::create_object<app::DeleteAssetRequest>(get_class());
        }
    } // namespace DeleteAssetRequest
} // namespace app::classes::types
