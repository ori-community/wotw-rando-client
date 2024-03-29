#pragma once
#include <Modloader/app/structs/RuntimeSliceRenderSettings_DofCurveMode__Enum.h>
#include <Modloader/app/structs/RuntimeSliceRenderSettings_DofCurveMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeSliceRenderSettings_DofCurveMode__Enum {
        inline app::RuntimeSliceRenderSettings_DofCurveMode__Enum__Class** type_info() {
            static app::RuntimeSliceRenderSettings_DofCurveMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeSliceRenderSettings_DofCurveMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeSliceRenderSettings_DofCurveMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeSliceRenderSettings_DofCurveMode__Enum__Class>(type_info(), "Moon.Rendering", "RuntimeSliceRenderSettings", "DofCurveMode");
        }
        inline app::RuntimeSliceRenderSettings_DofCurveMode__Enum* create() {
            return il2cpp::create_object<app::RuntimeSliceRenderSettings_DofCurveMode__Enum>(get_class());
        }
    } // namespace RuntimeSliceRenderSettings_DofCurveMode__Enum
} // namespace app::classes::types
