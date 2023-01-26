#pragma once
#include <Modloader/app/structs/ListAssetSummariesResponse.h>
#include <Modloader/app/structs/ListAssetSummariesResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListAssetSummariesResponse {
        inline app::ListAssetSummariesResponse__Class** type_info() {
            static app::ListAssetSummariesResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListAssetSummariesResponse__Class**)(modloader::win::memory::resolve_rva(0x04741600));
            }
            return cache;
        }
        inline app::ListAssetSummariesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListAssetSummariesResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "ListAssetSummariesResponse");
        }
        inline app::ListAssetSummariesResponse* create() {
            return il2cpp::create_object<app::ListAssetSummariesResponse>(get_class());
        }
    } // namespace ListAssetSummariesResponse
} // namespace app::classes::types
