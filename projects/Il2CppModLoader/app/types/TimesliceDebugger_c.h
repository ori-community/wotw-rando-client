#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimesliceDebugger_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimesliceDebugger_c__Class** type_info;
        inline app::TimesliceDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimesliceDebugger_c__Class>(type_info, "", "TimesliceDebugger", "<>c");
        }
        inline app::TimesliceDebugger_c* create() {
            return il2cpp::create_object<app::TimesliceDebugger_c>(get_class());
        }
    } // namespace TimesliceDebugger_c
} // namespace app::classes::types
