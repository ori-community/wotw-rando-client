#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_MemoryManagerDataCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemoryLabelDebugger_MemoryManagerDataCache__Class** type_info;
        inline app::MemoryLabelDebugger_MemoryManagerDataCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryLabelDebugger_MemoryManagerDataCache__Class>(type_info, "UberShader.optimizations.gc", "MemoryLabelDebugger", "MemoryManagerDataCache");
        }
        inline app::MemoryLabelDebugger_MemoryManagerDataCache* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_MemoryManagerDataCache>(get_class());
        }
    } // namespace MemoryLabelDebugger_MemoryManagerDataCache
} // namespace app::classes::types
