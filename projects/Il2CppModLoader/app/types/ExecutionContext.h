#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExecutionContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExecutionContext__Class** type_info;
        inline app::ExecutionContext__Class* get_class() {
            return il2cpp::get_class<app::ExecutionContext__Class>(type_info, "System.Threading", "ExecutionContext");
        }
        inline app::ExecutionContext* create() {
            return il2cpp::create_object<app::ExecutionContext>(get_class());
        }
    } // namespace ExecutionContext
} // namespace app::classes::types
