#pragma once
#include <Modloader/app/structs/BaseSpline_SplineReparamType__Enum.h>
#include <Modloader/app/structs/BaseSpline_SplineReparamType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseSpline_SplineReparamType__Enum {
        inline app::BaseSpline_SplineReparamType__Enum__Class** type_info() {
            static app::BaseSpline_SplineReparamType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseSpline_SplineReparamType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseSpline_SplineReparamType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseSpline_SplineReparamType__Enum__Class>(type_info(), "", "BaseSpline", "SplineReparamType");
        }
        inline app::BaseSpline_SplineReparamType__Enum* create() {
            return il2cpp::create_object<app::BaseSpline_SplineReparamType__Enum>(get_class());
        }
    } // namespace BaseSpline_SplineReparamType__Enum
} // namespace app::classes::types
