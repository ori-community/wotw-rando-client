#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NvnMemoryDebugger {
        inline app::NvnMemoryDebugger__Class** type_info = (app::NvnMemoryDebugger__Class**)(modloader::win::memory::resolve_rva(0x047503F0));
        inline app::NvnMemoryDebugger__Class* get_class() {
            return il2cpp::get_class<app::NvnMemoryDebugger__Class>(type_info, "UberShader.optimizations.gc", "NvnMemoryDebugger");
        }
        inline app::NvnMemoryDebugger* create() {
            return il2cpp::create_object<app::NvnMemoryDebugger>(get_class());
        }
    } // namespace NvnMemoryDebugger
} // namespace app::classes::types
