#pragma once
#include <Modloader/app/structs/RubberBandedValueProvider_DistanceMeasureMode__Enum.h>
#include <Modloader/app/structs/RubberBandedValueProvider_DistanceMeasureMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RubberBandedValueProvider_DistanceMeasureMode__Enum {
        inline app::RubberBandedValueProvider_DistanceMeasureMode__Enum__Class** type_info() {
            static app::RubberBandedValueProvider_DistanceMeasureMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RubberBandedValueProvider_DistanceMeasureMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RubberBandedValueProvider_DistanceMeasureMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RubberBandedValueProvider_DistanceMeasureMode__Enum__Class>(type_info(), "", "RubberBandedValueProvider", "DistanceMeasureMode");
        }
        inline app::RubberBandedValueProvider_DistanceMeasureMode__Enum* create() {
            return il2cpp::create_object<app::RubberBandedValueProvider_DistanceMeasureMode__Enum>(get_class());
        }
    } // namespace RubberBandedValueProvider_DistanceMeasureMode__Enum
} // namespace app::classes::types
