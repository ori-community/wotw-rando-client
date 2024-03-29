#pragma once
#include <Modloader/app/structs/DeleteAssetRequest.h>
#include <Modloader/app/structs/DeleteAssetRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteAssetRequest {
        inline app::DeleteAssetRequest__Class** type_info() {
            static app::DeleteAssetRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeleteAssetRequest__Class**)(modloader::win::memory::resolve_rva(0x0473CDE0));
            }
            return cache;
        }
        inline app::DeleteAssetRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteAssetRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "DeleteAssetRequest");
        }
        inline app::DeleteAssetRequest* create() {
            return il2cpp::create_object<app::DeleteAssetRequest>(get_class());
        }
    } // namespace DeleteAssetRequest
} // namespace app::classes::types
