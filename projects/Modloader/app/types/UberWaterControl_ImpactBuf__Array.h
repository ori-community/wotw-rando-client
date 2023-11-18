#pragma once
#include <Modloader/app/structs/UberWaterControl_ImpactBuf__Array.h>
#include <Modloader/app/structs/UberWaterControl_ImpactBuf__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl_ImpactBuf__Array {
        inline app::UberWaterControl_ImpactBuf__Array__Class** type_info() {
            static app::UberWaterControl_ImpactBuf__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterControl_ImpactBuf__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterControl_ImpactBuf__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterControl_ImpactBuf__Array__Class>(type_info(), "", "UberWaterControl+ImpactBuf[]");
        }
        inline app::UberWaterControl_ImpactBuf__Array* create() {
            return il2cpp::create_object<app::UberWaterControl_ImpactBuf__Array>(get_class());
        }
    } // namespace UberWaterControl_ImpactBuf__Array
} // namespace app::classes::types
