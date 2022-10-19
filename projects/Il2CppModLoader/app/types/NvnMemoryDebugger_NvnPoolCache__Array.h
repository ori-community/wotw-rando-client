#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NvnMemoryDebugger_NvnPoolCache__Array {
        namespace {
            inline app::NvnMemoryDebugger_NvnPoolCache__Array__Class* type_info_ref = nullptr;
        }
        inline app::NvnMemoryDebugger_NvnPoolCache__Array__Class** type_info = &type_info_ref;
        inline app::NvnMemoryDebugger_NvnPoolCache__Array__Class* get_class() {
            return il2cpp::get_class<app::NvnMemoryDebugger_NvnPoolCache__Array__Class>(type_info, "UberShader.optimizations.gc", "NvnMemoryDebugger+NvnPoolCache[]");
        }
        inline app::NvnMemoryDebugger_NvnPoolCache__Array* create() {
            return il2cpp::create_object<app::NvnMemoryDebugger_NvnPoolCache__Array>(get_class());
        }
    } // namespace NvnMemoryDebugger_NvnPoolCache__Array
} // namespace app::classes::types
