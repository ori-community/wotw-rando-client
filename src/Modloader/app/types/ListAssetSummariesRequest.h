#pragma once
#include <Modloader/app/structs/ListAssetSummariesRequest.h>
#include <Modloader/app/structs/ListAssetSummariesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListAssetSummariesRequest {
        inline app::ListAssetSummariesRequest__Class** type_info() {
            static app::ListAssetSummariesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListAssetSummariesRequest__Class**)(modloader::win::memory::resolve_rva(0x0474F740));
            }
            return cache;
        }
        inline app::ListAssetSummariesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListAssetSummariesRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "ListAssetSummariesRequest");
        }
        inline app::ListAssetSummariesRequest* create() {
            return il2cpp::create_object<app::ListAssetSummariesRequest>(get_class());
        }
    } // namespace ListAssetSummariesRequest
} // namespace app::classes::types
