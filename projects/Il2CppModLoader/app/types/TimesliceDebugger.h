#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimesliceDebugger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimesliceDebugger__Class** type_info;
        inline app::TimesliceDebugger__Class* get_class() {
            return il2cpp::get_class<app::TimesliceDebugger__Class>(type_info, "", "TimesliceDebugger");
        }
        inline app::TimesliceDebugger* create() {
            return il2cpp::create_object<app::TimesliceDebugger>(get_class());
        }
    } // namespace TimesliceDebugger
} // namespace app::classes::types
