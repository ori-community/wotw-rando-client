#pragma once
#include <Modloader/app/structs/ExecuteCloudScriptServerRequest.h>
#include <Modloader/app/structs/ExecuteCloudScriptServerRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptServerRequest {
        inline app::ExecuteCloudScriptServerRequest__Class** type_info() {
            static app::ExecuteCloudScriptServerRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExecuteCloudScriptServerRequest__Class**)(modloader::win::memory::resolve_rva(0x0474EC10));
            }
            return cache;
        }
        inline app::ExecuteCloudScriptServerRequest__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptServerRequest__Class>(type_info(), "PlayFab.ServerModels", "ExecuteCloudScriptServerRequest");
        }
        inline app::ExecuteCloudScriptServerRequest* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptServerRequest>(get_class());
        }
    } // namespace ExecuteCloudScriptServerRequest
} // namespace app::classes::types
