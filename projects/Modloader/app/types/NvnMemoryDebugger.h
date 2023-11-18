#pragma once
#include <Modloader/app/structs/NvnMemoryDebugger.h>
#include <Modloader/app/structs/NvnMemoryDebugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NvnMemoryDebugger {
        inline app::NvnMemoryDebugger__Class** type_info() {
            static app::NvnMemoryDebugger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NvnMemoryDebugger__Class**)(modloader::win::memory::resolve_rva(0x047503F0));
            }
            return cache;
        }
        inline app::NvnMemoryDebugger__Class* get_class() {
            return il2cpp::get_class<app::NvnMemoryDebugger__Class>(type_info(), "UberShader.optimizations.gc", "NvnMemoryDebugger");
        }
        inline app::NvnMemoryDebugger* create() {
            return il2cpp::create_object<app::NvnMemoryDebugger>(get_class());
        }
    } // namespace NvnMemoryDebugger
} // namespace app::classes::types
