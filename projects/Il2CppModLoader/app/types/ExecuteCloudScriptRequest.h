#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptRequest {
        inline app::ExecuteCloudScriptRequest__Class** type_info = (app::ExecuteCloudScriptRequest__Class**)(modloader::win::memory::resolve_rva(0x0473BC68));
        inline app::ExecuteCloudScriptRequest__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptRequest__Class>(type_info, "PlayFab.ClientModels", "ExecuteCloudScriptRequest");
        }
        inline app::ExecuteCloudScriptRequest* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptRequest>(get_class());
        }
    } // namespace ExecuteCloudScriptRequest
} // namespace app::classes::types
