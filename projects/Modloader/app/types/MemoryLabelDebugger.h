#pragma once
#include <Modloader/app/structs/MemoryLabelDebugger.h>
#include <Modloader/app/structs/MemoryLabelDebugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger {
        inline app::MemoryLabelDebugger__Class** type_info() {
            static app::MemoryLabelDebugger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemoryLabelDebugger__Class**)(modloader::win::memory::resolve_rva(0x04763B78));
            }
            return cache;
        }
        inline app::MemoryLabelDebugger__Class* get_class() {
            return il2cpp::get_class<app::MemoryLabelDebugger__Class>(type_info(), "UberShader.optimizations.gc", "MemoryLabelDebugger");
        }
        inline app::MemoryLabelDebugger* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger>(get_class());
        }
    } // namespace MemoryLabelDebugger
} // namespace app::classes::types
