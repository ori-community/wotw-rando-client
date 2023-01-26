#pragma once
#include <Modloader/app/structs/BaseSpline_SplinePointType__Enum.h>
#include <Modloader/app/structs/BaseSpline_SplinePointType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseSpline_SplinePointType__Enum {
        inline app::BaseSpline_SplinePointType__Enum__Class** type_info() {
            static app::BaseSpline_SplinePointType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseSpline_SplinePointType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseSpline_SplinePointType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseSpline_SplinePointType__Enum__Class>(type_info(), "", "BaseSpline", "SplinePointType");
        }
        inline app::BaseSpline_SplinePointType__Enum* create() {
            return il2cpp::create_object<app::BaseSpline_SplinePointType__Enum>(get_class());
        }
    } // namespace BaseSpline_SplinePointType__Enum
} // namespace app::classes::types
