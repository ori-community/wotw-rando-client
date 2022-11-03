#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExecuteEntityCloudScriptRequest {
        inline app::ExecuteEntityCloudScriptRequest__Class** type_info = (app::ExecuteEntityCloudScriptRequest__Class**)(modloader::win::memory::resolve_rva(0x0472EC58));
        inline app::ExecuteEntityCloudScriptRequest__Class* get_class() {
            return il2cpp::get_class<app::ExecuteEntityCloudScriptRequest__Class>(type_info, "PlayFab.CloudScriptModels", "ExecuteEntityCloudScriptRequest");
        }
        inline app::ExecuteEntityCloudScriptRequest* create() {
            return il2cpp::create_object<app::ExecuteEntityCloudScriptRequest>(get_class());
        }
    } // namespace ExecuteEntityCloudScriptRequest
} // namespace app::classes::types
