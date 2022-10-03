#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseSpline_SplineSegmentType__Enum {
        namespace {
            app::BaseSpline_SplineSegmentType__Enum__Class* type_info_ref = nullptr;
        }
        app::BaseSpline_SplineSegmentType__Enum__Class** type_info = &type_info_ref;
        inline app::BaseSpline_SplineSegmentType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseSpline_SplineSegmentType__Enum__Class>(type_info, "", "BaseSpline", "SplineSegmentType");
        }
        inline app::BaseSpline_SplineSegmentType__Enum* create() {
            return il2cpp::create_object<app::BaseSpline_SplineSegmentType__Enum>(get_class());
        }
    } // namespace BaseSpline_SplineSegmentType__Enum
} // namespace app::classes::types
