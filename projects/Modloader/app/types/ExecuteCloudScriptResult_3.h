#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptResult_3 {
        namespace {
            inline app::ExecuteCloudScriptResult_3__Class* type_info_ref = nullptr;
        }
        inline app::ExecuteCloudScriptResult_3__Class** type_info = &type_info_ref;
        inline app::ExecuteCloudScriptResult_3__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptResult_3__Class>(type_info, "PlayFab.PlayStreamModels", "ExecuteCloudScriptResult");
        }
        inline app::ExecuteCloudScriptResult_3* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptResult_3>(get_class());
        }
    } // namespace ExecuteCloudScriptResult_3
} // namespace app::classes::types
