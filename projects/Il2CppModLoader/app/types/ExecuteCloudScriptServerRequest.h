#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptServerRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExecuteCloudScriptServerRequest__Class** type_info;
        inline app::ExecuteCloudScriptServerRequest__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptServerRequest__Class>(type_info, "PlayFab.ServerModels", "ExecuteCloudScriptServerRequest");
        }
        inline app::ExecuteCloudScriptServerRequest* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptServerRequest>(get_class());
        }
    } // namespace ExecuteCloudScriptServerRequest
} // namespace app::classes::types
