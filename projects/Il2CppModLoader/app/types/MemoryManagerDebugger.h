#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryManagerDebugger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemoryManagerDebugger__Class** type_info;
        inline app::MemoryManagerDebugger__Class* get_class() {
            return il2cpp::get_class<app::MemoryManagerDebugger__Class>(type_info, "UberShader.optimizations.gc", "MemoryManagerDebugger");
        }
        inline app::MemoryManagerDebugger* create() {
            return il2cpp::create_object<app::MemoryManagerDebugger>(get_class());
        }
    } // namespace MemoryManagerDebugger
} // namespace app::classes::types
