#pragma once
#include <Modloader/app/structs/MemoryManagerDebugger.h>
#include <Modloader/app/structs/MemoryManagerDebugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryManagerDebugger {
        inline app::MemoryManagerDebugger__Class** type_info() {
            static app::MemoryManagerDebugger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemoryManagerDebugger__Class**)(modloader::win::memory::resolve_rva(0x0476F6D0));
            }
            return cache;
        }
        inline app::MemoryManagerDebugger__Class* get_class() {
            return il2cpp::get_class<app::MemoryManagerDebugger__Class>(type_info(), "UberShader.optimizations.gc", "MemoryManagerDebugger");
        }
        inline app::MemoryManagerDebugger* create() {
            return il2cpp::create_object<app::MemoryManagerDebugger>(get_class());
        }
    } // namespace MemoryManagerDebugger
} // namespace app::classes::types
