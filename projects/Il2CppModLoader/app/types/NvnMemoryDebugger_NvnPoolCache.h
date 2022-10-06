#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NvnMemoryDebugger_NvnPoolCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NvnMemoryDebugger_NvnPoolCache__Class** type_info;
        inline app::NvnMemoryDebugger_NvnPoolCache__Class* get_class() {
            return il2cpp::get_nested_class<app::NvnMemoryDebugger_NvnPoolCache__Class>(type_info, "UberShader.optimizations.gc", "NvnMemoryDebugger", "NvnPoolCache");
        }
        inline app::NvnMemoryDebugger_NvnPoolCache* create() {
            return il2cpp::create_object<app::NvnMemoryDebugger_NvnPoolCache>(get_class());
        }
        inline app::NvnMemoryDebugger_NvnPoolCache__Array* create_array(int size) {
            return il2cpp::array_new<app::NvnMemoryDebugger_NvnPoolCache__Array>(get_class(), size);
        }
        inline app::NvnMemoryDebugger_NvnPoolCache__Array* create_array(const std::vector<app::NvnMemoryDebugger_NvnPoolCache*>& items) {
            return il2cpp::array_new<app::NvnMemoryDebugger_NvnPoolCache__Array>(get_class(), items);
        }
    } // namespace NvnMemoryDebugger_NvnPoolCache
} // namespace app::classes::types
