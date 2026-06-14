#pragma once
#include <Modloader/app/structs/ScriptExecutionError_3.h>
#include <Modloader/app/structs/ScriptExecutionError_3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScriptExecutionError_3 {
        inline app::ScriptExecutionError_3__Class** type_info() {
            static app::ScriptExecutionError_3__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScriptExecutionError_3__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScriptExecutionError_3__Class* get_class() {
            return il2cpp::get_class<app::ScriptExecutionError_3__Class>(type_info(), "PlayFab.PlayStreamModels", "ScriptExecutionError");
        }
        inline app::ScriptExecutionError_3* create() {
            return il2cpp::create_object<app::ScriptExecutionError_3>(get_class());
        }
    } // namespace ScriptExecutionError_3
} // namespace app::classes::types
