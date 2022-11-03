#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListBuildSummariesRequest {
        inline app::ListBuildSummariesRequest__Class** type_info = (app::ListBuildSummariesRequest__Class**)(modloader::win::memory::resolve_rva(0x047438C8));
        inline app::ListBuildSummariesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListBuildSummariesRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListBuildSummariesRequest");
        }
        inline app::ListBuildSummariesRequest* create() {
            return il2cpp::create_object<app::ListBuildSummariesRequest>(get_class());
        }
    } // namespace ListBuildSummariesRequest
} // namespace app::classes::types
