#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManagerAccelerator_CellInteractionData {
        namespace {
            app::UberInteractionManagerAccelerator_CellInteractionData__Class* type_info_ref = nullptr;
        }
        app::UberInteractionManagerAccelerator_CellInteractionData__Class** type_info = &type_info_ref;
        inline app::UberInteractionManagerAccelerator_CellInteractionData__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManagerAccelerator_CellInteractionData__Class>(type_info, "", "UberInteractionManagerAccelerator", "CellInteractionData");
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
    } // namespace UberInteractionManagerAccelerator_CellInteractionData
} // namespace app::classes::types
