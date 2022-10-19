#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExecutionContext {
        inline app::ExecutionContext__Class** type_info = (app::ExecutionContext__Class**)(modloader::win::memory::resolve_rva(0x0471E090));
        inline app::ExecutionContext__Class* get_class() {
            return il2cpp::get_class<app::ExecutionContext__Class>(type_info, "System.Threading", "ExecutionContext");
        }
        inline app::ExecutionContext* create() {
            return il2cpp::create_object<app::ExecutionContext>(get_class());
        }
    } // namespace ExecutionContext
} // namespace app::classes::types
