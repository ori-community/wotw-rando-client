#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NvnMemoryDebugger_NvnDataCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NvnMemoryDebugger_NvnDataCache__Class** type_info;
        inline app::NvnMemoryDebugger_NvnDataCache__Class* get_class() {
            return il2cpp::get_nested_class<app::NvnMemoryDebugger_NvnDataCache__Class>(type_info, "UberShader.optimizations.gc", "NvnMemoryDebugger", "NvnDataCache");
        }
        inline app::NvnMemoryDebugger_NvnDataCache* create() {
            return il2cpp::create_object<app::NvnMemoryDebugger_NvnDataCache>(get_class());
        }
    } // namespace NvnMemoryDebugger_NvnDataCache
} // namespace app::classes::types
