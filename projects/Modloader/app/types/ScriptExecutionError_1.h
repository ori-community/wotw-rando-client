#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScriptExecutionError_1 {
        namespace {
            inline app::ScriptExecutionError_1__Class* type_info_ref = nullptr;
        }
        inline app::ScriptExecutionError_1__Class** type_info = &type_info_ref;
        inline app::ScriptExecutionError_1__Class* get_class() {
            return il2cpp::get_class<app::ScriptExecutionError_1__Class>(type_info, "PlayFab.CloudScriptModels", "ScriptExecutionError");
        }
        inline app::ScriptExecutionError_1* create() {
            return il2cpp::create_object<app::ScriptExecutionError_1>(get_class());
        }
    } // namespace ScriptExecutionError_1
} // namespace app::classes::types
