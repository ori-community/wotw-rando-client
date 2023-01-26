#pragma once
#include <Modloader/app/structs/ScriptExecutionError_2.h>
#include <Modloader/app/structs/ScriptExecutionError_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScriptExecutionError_2 {
        inline app::ScriptExecutionError_2__Class** type_info() {
            static app::ScriptExecutionError_2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScriptExecutionError_2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScriptExecutionError_2__Class* get_class() {
            return il2cpp::get_class<app::ScriptExecutionError_2__Class>(type_info(), "PlayFab.ServerModels", "ScriptExecutionError");
        }
        inline app::ScriptExecutionError_2* create() {
            return il2cpp::create_object<app::ScriptExecutionError_2>(get_class());
        }
    } // namespace ScriptExecutionError_2
} // namespace app::classes::types
