#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryManagerDebugger {
        inline app::MemoryManagerDebugger__Class** type_info = (app::MemoryManagerDebugger__Class**)(modloader::win::memory::resolve_rva(0x0476F6D0));
        inline app::MemoryManagerDebugger__Class* get_class() {
            return il2cpp::get_class<app::MemoryManagerDebugger__Class>(type_info, "UberShader.optimizations.gc", "MemoryManagerDebugger");
        }
        inline app::MemoryManagerDebugger* create() {
            return il2cpp::create_object<app::MemoryManagerDebugger>(get_class());
        }
    } // namespace MemoryManagerDebugger
} // namespace app::classes::types
