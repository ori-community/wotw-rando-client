#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RubberBandedValueProvider_DistanceMeasureMode__Enum {
        namespace {
            app::RubberBandedValueProvider_DistanceMeasureMode__Enum__Class* type_info_ref = nullptr;
        }
        app::RubberBandedValueProvider_DistanceMeasureMode__Enum__Class** type_info = &type_info_ref;
        inline app::RubberBandedValueProvider_DistanceMeasureMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RubberBandedValueProvider_DistanceMeasureMode__Enum__Class>(type_info, "", "RubberBandedValueProvider", "DistanceMeasureMode");
        }
        inline app::RubberBandedValueProvider_DistanceMeasureMode__Enum* create() {
            return il2cpp::create_object<app::RubberBandedValueProvider_DistanceMeasureMode__Enum>(get_class());
        }
    } // namespace RubberBandedValueProvider_DistanceMeasureMode__Enum
} // namespace app::classes::types
