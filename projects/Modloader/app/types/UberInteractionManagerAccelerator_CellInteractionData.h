#pragma once
#include <Modloader/app/structs/UberInteractionManagerAccelerator_CellInteractionData.h>
#include <Modloader/app/structs/UberInteractionManagerAccelerator_CellInteractionData__Array.h>
#include <Modloader/app/structs/UberInteractionManagerAccelerator_CellInteractionData__Boxed.h>
#include <Modloader/app/structs/UberInteractionManagerAccelerator_CellInteractionData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManagerAccelerator_CellInteractionData {
        inline app::UberInteractionManagerAccelerator_CellInteractionData__Class** type_info() {
            static app::UberInteractionManagerAccelerator_CellInteractionData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberInteractionManagerAccelerator_CellInteractionData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberInteractionManagerAccelerator_CellInteractionData__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManagerAccelerator_CellInteractionData__Class>(type_info(), "", "UberInteractionManagerAccelerator", "CellInteractionData");
        }
        inline app::UberInteractionManagerAccelerator_CellInteractionData* create() {
            return il2cpp::create_object<app::UberInteractionManagerAccelerator_CellInteractionData>(get_class());
        }
        inline app::UberInteractionManagerAccelerator_CellInteractionData__Boxed* box(app::UberInteractionManagerAccelerator_CellInteractionData value) {
            return il2cpp::box_value<app::UberInteractionManagerAccelerator_CellInteractionData__Boxed>(get_class(), value);
        }
        inline app::UberInteractionManagerAccelerator_CellInteractionData__Array* create_array(int size) {
            return il2cpp::array_new<app::UberInteractionManagerAccelerator_CellInteractionData__Array>(get_class(), size);
        }
        inline app::UberInteractionManagerAccelerator_CellInteractionData__Array* create_array(const std::vector<app::UberInteractionManagerAccelerator_CellInteractionData>& items) {
            return il2cpp::array_new<app::UberInteractionManagerAccelerator_CellInteractionData__Array>(get_class(), items);
        }
    } // namespace UberInteractionManagerAccelerator_CellInteractionData
} // namespace app::classes::types
