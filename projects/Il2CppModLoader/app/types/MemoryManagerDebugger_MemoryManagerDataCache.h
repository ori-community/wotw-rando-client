#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryManagerDebugger_MemoryManagerDataCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemoryManagerDebugger_MemoryManagerDataCache__Class** type_info;
        inline app::MemoryManagerDebugger_MemoryManagerDataCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryManagerDebugger_MemoryManagerDataCache__Class>(type_info, "UberShader.optimizations.gc", "MemoryManagerDebugger", "MemoryManagerDataCache");
        }
        inline app::MemoryManagerDebugger_MemoryManagerDataCache* create() {
            return il2cpp::create_object<app::MemoryManagerDebugger_MemoryManagerDataCache>(get_class());
        }
    } // namespace MemoryManagerDebugger_MemoryManagerDataCache
} // namespace app::classes::types
