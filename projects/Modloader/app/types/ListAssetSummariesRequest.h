#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListAssetSummariesRequest__Class.h>
#include <Modloader/app/structs/ListAssetSummariesRequest.h>

namespace app::classes::types {
    namespace ListAssetSummariesRequest {
        inline app::ListAssetSummariesRequest__Class** type_info = (app::ListAssetSummariesRequest__Class**)(modloader::win::memory::resolve_rva(0x0474F740));
        inline app::ListAssetSummariesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListAssetSummariesRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListAssetSummariesRequest");
        }
        inline app::ListAssetSummariesRequest* create() {
            return il2cpp::create_object<app::ListAssetSummariesRequest>(get_class());
        }
    } // namespace ListAssetSummariesRequest
} // namespace app::classes::types
