#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberGCLogic_MemoryProbeType__Enum {
        inline app::UberGCLogic_MemoryProbeType__Enum__Class** type_info = (app::UberGCLogic_MemoryProbeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047191B0));
        inline app::UberGCLogic_MemoryProbeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCLogic_MemoryProbeType__Enum__Class>(type_info, "UberShader.optimizations.gc", "UberGCLogic", "MemoryProbeType");
        }
        inline app::UberGCLogic_MemoryProbeType__Enum* create() {
            return il2cpp::create_object<app::UberGCLogic_MemoryProbeType__Enum>(get_class());
        }
    } // namespace UberGCLogic_MemoryProbeType__Enum
} // namespace app::classes::types
