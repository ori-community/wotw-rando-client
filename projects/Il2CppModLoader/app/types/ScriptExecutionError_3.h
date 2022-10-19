#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScriptExecutionError_3 {
        namespace {
            inline app::ScriptExecutionError_3__Class* type_info_ref = nullptr;
        }
        inline app::ScriptExecutionError_3__Class** type_info = &type_info_ref;
        inline app::ScriptExecutionError_3__Class* get_class() {
            return il2cpp::get_class<app::ScriptExecutionError_3__Class>(type_info, "PlayFab.PlayStreamModels", "ScriptExecutionError");
        }
        inline app::ScriptExecutionError_3* create() {
            return il2cpp::create_object<app::ScriptExecutionError_3>(get_class());
        }
    } // namespace ScriptExecutionError_3
} // namespace app::classes::types
