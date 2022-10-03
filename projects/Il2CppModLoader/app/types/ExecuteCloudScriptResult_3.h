#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptResult_3 {
        namespace {
            app::ExecuteCloudScriptResult_3__Class* type_info_ref = nullptr;
        }
        app::ExecuteCloudScriptResult_3__Class** type_info = &type_info_ref;
        inline app::ExecuteCloudScriptResult_3__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptResult_3__Class>(type_info, "PlayFab.PlayStreamModels", "ExecuteCloudScriptResult");
        }
        inline app::ExecuteCloudScriptResult_3* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptResult_3>(get_class());
        }
    } // namespace ExecuteCloudScriptResult_3
} // namespace app::classes::types
