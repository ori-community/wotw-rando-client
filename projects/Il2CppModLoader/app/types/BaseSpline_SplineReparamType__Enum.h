#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseSpline_SplineReparamType__Enum {
        namespace {
            app::BaseSpline_SplineReparamType__Enum__Class* type_info_ref = nullptr;
        }
        app::BaseSpline_SplineReparamType__Enum__Class** type_info = &type_info_ref;
        inline app::BaseSpline_SplineReparamType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseSpline_SplineReparamType__Enum__Class>(type_info, "", "BaseSpline", "SplineReparamType");
        }
        inline app::BaseSpline_SplineReparamType__Enum* create() {
            return il2cpp::create_object<app::BaseSpline_SplineReparamType__Enum>(get_class());
        }
    } // namespace BaseSpline_SplineReparamType__Enum
} // namespace app::classes::types
