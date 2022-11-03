#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NvnMemoryDebugger_NvnDataCache {
        inline app::NvnMemoryDebugger_NvnDataCache__Class** type_info = (app::NvnMemoryDebugger_NvnDataCache__Class**)(modloader::win::memory::resolve_rva(0x0472DB20));
        inline app::NvnMemoryDebugger_NvnDataCache__Class* get_class() {
            return il2cpp::get_nested_class<app::NvnMemoryDebugger_NvnDataCache__Class>(type_info, "UberShader.optimizations.gc", "NvnMemoryDebugger", "NvnDataCache");
        }
        inline app::NvnMemoryDebugger_NvnDataCache* create() {
            return il2cpp::create_object<app::NvnMemoryDebugger_NvnDataCache>(get_class());
        }
    } // namespace NvnMemoryDebugger_NvnDataCache
} // namespace app::classes::types
