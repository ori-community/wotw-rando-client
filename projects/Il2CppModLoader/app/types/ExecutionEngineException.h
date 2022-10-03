#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExecutionEngineException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExecutionEngineException__Class** type_info;
        inline app::ExecutionEngineException__Class* get_class() {
            return il2cpp::get_class<app::ExecutionEngineException__Class>(type_info, "System", "ExecutionEngineException");
        }
        inline app::ExecutionEngineException* create() {
            return il2cpp::create_object<app::ExecutionEngineException>(get_class());
        }
    } // namespace ExecutionEngineException
} // namespace app::classes::types
