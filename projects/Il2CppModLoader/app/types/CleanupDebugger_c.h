#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleanupDebugger_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CleanupDebugger_c__Class** type_info;
        inline app::CleanupDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CleanupDebugger_c__Class>(type_info, "", "CleanupDebugger", "<>c");
        }
        inline app::CleanupDebugger_c* create() {
            return il2cpp::create_object<app::CleanupDebugger_c>(get_class());
        }
    } // namespace CleanupDebugger_c
} // namespace app::classes::types
