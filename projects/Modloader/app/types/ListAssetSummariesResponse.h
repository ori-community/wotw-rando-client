#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListAssetSummariesResponse {
        inline app::ListAssetSummariesResponse__Class** type_info = (app::ListAssetSummariesResponse__Class**)(modloader::win::memory::resolve_rva(0x04741600));
        inline app::ListAssetSummariesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListAssetSummariesResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListAssetSummariesResponse");
        }
        inline app::ListAssetSummariesResponse* create() {
            return il2cpp::create_object<app::ListAssetSummariesResponse>(get_class());
        }
    } // namespace ListAssetSummariesResponse
} // namespace app::classes::types
