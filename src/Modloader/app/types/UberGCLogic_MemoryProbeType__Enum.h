#pragma once
#include <Modloader/app/structs/UberGCLogic_MemoryProbeType__Enum.h>
#include <Modloader/app/structs/UberGCLogic_MemoryProbeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberGCLogic_MemoryProbeType__Enum {
        inline app::UberGCLogic_MemoryProbeType__Enum__Class** type_info() {
            static app::UberGCLogic_MemoryProbeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberGCLogic_MemoryProbeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047191B0));
            }
            return cache;
        }
        inline app::UberGCLogic_MemoryProbeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCLogic_MemoryProbeType__Enum__Class>(type_info(), "UberShader.optimizations.gc", "UberGCLogic", "MemoryProbeType");
        }
        inline app::UberGCLogic_MemoryProbeType__Enum* create() {
            return il2cpp::create_object<app::UberGCLogic_MemoryProbeType__Enum>(get_class());
        }
    } // namespace UberGCLogic_MemoryProbeType__Enum
} // namespace app::classes::types
