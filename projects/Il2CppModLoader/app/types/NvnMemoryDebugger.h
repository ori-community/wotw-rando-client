#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NvnMemoryDebugger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NvnMemoryDebugger__Class** type_info;
        inline app::NvnMemoryDebugger__Class* get_class() {
            return il2cpp::get_class<app::NvnMemoryDebugger__Class>(type_info, "UberShader.optimizations.gc", "NvnMemoryDebugger");
        }
        inline app::NvnMemoryDebugger* create() {
            return il2cpp::create_object<app::NvnMemoryDebugger>(get_class());
        }
    } // namespace NvnMemoryDebugger
} // namespace app::classes::types
