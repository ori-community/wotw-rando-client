#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeleteAssetRequest {
        inline app::DeleteAssetRequest__Class** type_info = (app::DeleteAssetRequest__Class**)(modloader::win::memory::resolve_rva(0x0473CDE0));
        inline app::DeleteAssetRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteAssetRequest__Class>(type_info, "PlayFab.MultiplayerModels", "DeleteAssetRequest");
        }
        inline app::DeleteAssetRequest* create() {
            return il2cpp::create_object<app::DeleteAssetRequest>(get_class());
        }
    } // namespace DeleteAssetRequest
} // namespace app::classes::types
