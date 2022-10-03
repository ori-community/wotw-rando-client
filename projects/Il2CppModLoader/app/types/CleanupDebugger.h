#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleanupDebugger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CleanupDebugger__Class** type_info;
        inline app::CleanupDebugger__Class* get_class() {
            return il2cpp::get_class<app::CleanupDebugger__Class>(type_info, "", "CleanupDebugger");
        }
        inline app::CleanupDebugger* create() {
            return il2cpp::create_object<app::CleanupDebugger>(get_class());
        }
    } // namespace CleanupDebugger
} // namespace app::classes::types
