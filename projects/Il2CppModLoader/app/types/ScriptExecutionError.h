#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScriptExecutionError {
        inline app::ScriptExecutionError__Class** type_info = (app::ScriptExecutionError__Class**)(modloader::win::memory::resolve_rva(0x0477AD50));
        inline app::ScriptExecutionError__Class* get_class() {
            return il2cpp::get_class<app::ScriptExecutionError__Class>(type_info, "PlayFab.ClientModels", "ScriptExecutionError");
        }
        inline app::ScriptExecutionError* create() {
            return il2cpp::create_object<app::ScriptExecutionError>(get_class());
        }
    } // namespace ScriptExecutionError
} // namespace app::classes::types
