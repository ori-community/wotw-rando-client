#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeSliceRenderSettings_DofCurveMode__Enum {
        namespace {
            app::RuntimeSliceRenderSettings_DofCurveMode__Enum__Class* type_info_ref = nullptr;
        }
        app::RuntimeSliceRenderSettings_DofCurveMode__Enum__Class** type_info = &type_info_ref;
        inline app::RuntimeSliceRenderSettings_DofCurveMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeSliceRenderSettings_DofCurveMode__Enum__Class>(type_info, "Moon.Rendering", "RuntimeSliceRenderSettings", "DofCurveMode");
        }
        inline app::RuntimeSliceRenderSettings_DofCurveMode__Enum* create() {
            return il2cpp::create_object<app::RuntimeSliceRenderSettings_DofCurveMode__Enum>(get_class());
        }
    } // namespace RuntimeSliceRenderSettings_DofCurveMode__Enum
} // namespace app::classes::types
