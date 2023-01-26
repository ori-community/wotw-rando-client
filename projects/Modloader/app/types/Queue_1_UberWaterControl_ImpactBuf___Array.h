#pragma once
#include <Modloader/app/structs/Queue_1_UberWaterControl_ImpactBuf___Array.h>
#include <Modloader/app/structs/Queue_1_UberWaterControl_ImpactBuf___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Queue_1_UberWaterControl_ImpactBuf___Array {
        inline app::Queue_1_UberWaterControl_ImpactBuf___Array__Class** type_info() {
            static app::Queue_1_UberWaterControl_ImpactBuf___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Queue_1_UberWaterControl_ImpactBuf___Array__Class**)(modloader::win::memory::resolve_rva(0x04736D58));
            }
            return cache;
        }
        inline app::Queue_1_UberWaterControl_ImpactBuf___Array__Class* get_class() {
            return il2cpp::get_class<app::Queue_1_UberWaterControl_ImpactBuf___Array__Class>(type_info(), "System.Collections.Generic", "Queue`1[UberWaterControl+ImpactBuf][]");
        }
        inline app::Queue_1_UberWaterControl_ImpactBuf___Array* create() {
            return il2cpp::create_object<app::Queue_1_UberWaterControl_ImpactBuf___Array>(get_class());
        }
    } // namespace Queue_1_UberWaterControl_ImpactBuf___Array
} // namespace app::classes::types
