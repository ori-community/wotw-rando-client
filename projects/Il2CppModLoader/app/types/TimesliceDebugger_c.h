#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimesliceDebugger_c {
        inline app::TimesliceDebugger_c__Class** type_info = (app::TimesliceDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x0477BE50));
        inline app::TimesliceDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimesliceDebugger_c__Class>(type_info, "", "TimesliceDebugger", "<>c");
        }
        inline app::TimesliceDebugger_c* create() {
            return il2cpp::create_object<app::TimesliceDebugger_c>(get_class());
        }
    } // namespace TimesliceDebugger_c
} // namespace app::classes::types
