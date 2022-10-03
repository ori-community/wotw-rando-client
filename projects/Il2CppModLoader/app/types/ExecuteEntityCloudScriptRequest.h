#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExecuteEntityCloudScriptRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExecuteEntityCloudScriptRequest__Class** type_info;
        inline app::ExecuteEntityCloudScriptRequest__Class* get_class() {
            return il2cpp::get_class<app::ExecuteEntityCloudScriptRequest__Class>(type_info, "PlayFab.CloudScriptModels", "ExecuteEntityCloudScriptRequest");
        }
        inline app::ExecuteEntityCloudScriptRequest* create() {
            return il2cpp::create_object<app::ExecuteEntityCloudScriptRequest>(get_class());
        }
    } // namespace ExecuteEntityCloudScriptRequest
} // namespace app::classes::types
