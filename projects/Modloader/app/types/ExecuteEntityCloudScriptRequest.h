#pragma once
#include <Modloader/app/structs/ExecuteEntityCloudScriptRequest.h>
#include <Modloader/app/structs/ExecuteEntityCloudScriptRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecuteEntityCloudScriptRequest {
        inline app::ExecuteEntityCloudScriptRequest__Class** type_info() {
            static app::ExecuteEntityCloudScriptRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExecuteEntityCloudScriptRequest__Class**)(modloader::win::memory::resolve_rva(0x0472EC58));
            }
            return cache;
        }
        inline app::ExecuteEntityCloudScriptRequest__Class* get_class() {
            return il2cpp::get_class<app::ExecuteEntityCloudScriptRequest__Class>(type_info(), "PlayFab.CloudScriptModels", "ExecuteEntityCloudScriptRequest");
        }
        inline app::ExecuteEntityCloudScriptRequest* create() {
            return il2cpp::create_object<app::ExecuteEntityCloudScriptRequest>(get_class());
        }
    } // namespace ExecuteEntityCloudScriptRequest
} // namespace app::classes::types
