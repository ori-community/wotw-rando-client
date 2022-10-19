#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptResult_2 {
        inline app::ExecuteCloudScriptResult_2__Class** type_info = (app::ExecuteCloudScriptResult_2__Class**)(modloader::win::memory::resolve_rva(0x0477C000));
        inline app::ExecuteCloudScriptResult_2__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptResult_2__Class>(type_info, "PlayFab.ServerModels", "ExecuteCloudScriptResult");
        }
        inline app::ExecuteCloudScriptResult_2* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptResult_2>(get_class());
        }
    } // namespace ExecuteCloudScriptResult_2
} // namespace app::classes::types
