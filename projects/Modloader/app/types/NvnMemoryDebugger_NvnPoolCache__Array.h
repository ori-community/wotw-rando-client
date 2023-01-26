#pragma once
#include <Modloader/app/structs/NvnMemoryDebugger_NvnPoolCache__Array.h>
#include <Modloader/app/structs/NvnMemoryDebugger_NvnPoolCache__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NvnMemoryDebugger_NvnPoolCache__Array {
        inline app::NvnMemoryDebugger_NvnPoolCache__Array__Class** type_info() {
            static app::NvnMemoryDebugger_NvnPoolCache__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NvnMemoryDebugger_NvnPoolCache__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NvnMemoryDebugger_NvnPoolCache__Array__Class* get_class() {
            return il2cpp::get_class<app::NvnMemoryDebugger_NvnPoolCache__Array__Class>(type_info(), "UberShader.optimizations.gc", "NvnMemoryDebugger+NvnPoolCache[]");
        }
        inline app::NvnMemoryDebugger_NvnPoolCache__Array* create() {
            return il2cpp::create_object<app::NvnMemoryDebugger_NvnPoolCache__Array>(get_class());
        }
    } // namespace NvnMemoryDebugger_NvnPoolCache__Array
} // namespace app::classes::types
