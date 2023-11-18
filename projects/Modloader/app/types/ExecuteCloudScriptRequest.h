#pragma once
#include <Modloader/app/structs/ExecuteCloudScriptRequest.h>
#include <Modloader/app/structs/ExecuteCloudScriptRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptRequest {
        inline app::ExecuteCloudScriptRequest__Class** type_info() {
            static app::ExecuteCloudScriptRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExecuteCloudScriptRequest__Class**)(modloader::win::memory::resolve_rva(0x0473BC68));
            }
            return cache;
        }
        inline app::ExecuteCloudScriptRequest__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptRequest__Class>(type_info(), "PlayFab.ClientModels", "ExecuteCloudScriptRequest");
        }
        inline app::ExecuteCloudScriptRequest* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptRequest>(get_class());
        }
    } // namespace ExecuteCloudScriptRequest
} // namespace app::classes::types
