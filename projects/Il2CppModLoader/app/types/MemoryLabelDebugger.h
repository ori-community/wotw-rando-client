#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemoryLabelDebugger__Class** type_info;
        inline app::MemoryLabelDebugger__Class* get_class() {
            return il2cpp::get_class<app::MemoryLabelDebugger__Class>(type_info, "UberShader.optimizations.gc", "MemoryLabelDebugger");
        }
        inline app::MemoryLabelDebugger* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger>(get_class());
        }
    } // namespace MemoryLabelDebugger
} // namespace app::classes::types
