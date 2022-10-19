#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptServerRequest {
        inline app::ExecuteCloudScriptServerRequest__Class** type_info = (app::ExecuteCloudScriptServerRequest__Class**)(modloader::win::memory::resolve_rva(0x0474EC10));
        inline app::ExecuteCloudScriptServerRequest__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptServerRequest__Class>(type_info, "PlayFab.ServerModels", "ExecuteCloudScriptServerRequest");
        }
        inline app::ExecuteCloudScriptServerRequest* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptServerRequest>(get_class());
        }
    } // namespace ExecuteCloudScriptServerRequest
} // namespace app::classes::types
