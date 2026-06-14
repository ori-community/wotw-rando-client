#pragma once
#include <Modloader/app/structs/ExecuteCloudScriptResult_2.h>
#include <Modloader/app/structs/ExecuteCloudScriptResult_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptResult_2 {
        inline app::ExecuteCloudScriptResult_2__Class** type_info() {
            static app::ExecuteCloudScriptResult_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExecuteCloudScriptResult_2__Class**)(modloader::win::memory::resolve_rva(0x0477C000));
            }
            return cache;
        }
        inline app::ExecuteCloudScriptResult_2__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptResult_2__Class>(type_info(), "PlayFab.ServerModels", "ExecuteCloudScriptResult");
        }
        inline app::ExecuteCloudScriptResult_2* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptResult_2>(get_class());
        }
    } // namespace ExecuteCloudScriptResult_2
} // namespace app::classes::types
