#pragma once
#include <Modloader/app/structs/ExecuteCloudScriptResult.h>
#include <Modloader/app/structs/ExecuteCloudScriptResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptResult {
        inline app::ExecuteCloudScriptResult__Class** type_info() {
            static app::ExecuteCloudScriptResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExecuteCloudScriptResult__Class**)(modloader::win::memory::resolve_rva(0x04764EA8));
            }
            return cache;
        }
        inline app::ExecuteCloudScriptResult__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptResult__Class>(type_info(), "PlayFab.ClientModels", "ExecuteCloudScriptResult");
        }
        inline app::ExecuteCloudScriptResult* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptResult>(get_class());
        }
    } // namespace ExecuteCloudScriptResult
} // namespace app::classes::types
