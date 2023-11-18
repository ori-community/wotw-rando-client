#pragma once
#include <Modloader/app/structs/ScriptExecutionError_1.h>
#include <Modloader/app/structs/ScriptExecutionError_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScriptExecutionError_1 {
        inline app::ScriptExecutionError_1__Class** type_info() {
            static app::ScriptExecutionError_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScriptExecutionError_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScriptExecutionError_1__Class* get_class() {
            return il2cpp::get_class<app::ScriptExecutionError_1__Class>(type_info(), "PlayFab.CloudScriptModels", "ScriptExecutionError");
        }
        inline app::ScriptExecutionError_1* create() {
            return il2cpp::create_object<app::ScriptExecutionError_1>(get_class());
        }
    } // namespace ScriptExecutionError_1
} // namespace app::classes::types
