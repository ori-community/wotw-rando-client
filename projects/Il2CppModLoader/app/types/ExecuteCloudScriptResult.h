#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExecuteCloudScriptResult__Class** type_info;
        inline app::ExecuteCloudScriptResult__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptResult__Class>(type_info, "PlayFab.ClientModels", "ExecuteCloudScriptResult");
        }
        inline app::ExecuteCloudScriptResult* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptResult>(get_class());
        }
    } // namespace ExecuteCloudScriptResult
} // namespace app::classes::types
