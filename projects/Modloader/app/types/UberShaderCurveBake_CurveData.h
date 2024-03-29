#pragma once
#include <Modloader/app/structs/UberShaderCurveBake_CurveData.h>
#include <Modloader/app/structs/UberShaderCurveBake_CurveData__Array.h>
#include <Modloader/app/structs/UberShaderCurveBake_CurveData__Boxed.h>
#include <Modloader/app/structs/UberShaderCurveBake_CurveData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderCurveBake_CurveData {
        inline app::UberShaderCurveBake_CurveData__Class** type_info() {
            static app::UberShaderCurveBake_CurveData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderCurveBake_CurveData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderCurveBake_CurveData__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderCurveBake_CurveData__Class>(type_info(), "", "UberShaderCurveBake", "CurveData");
        }
        inline app::UberShaderCurveBake_CurveData* create() {
            return il2cpp::create_object<app::UberShaderCurveBake_CurveData>(get_class());
        }
        inline app::UberShaderCurveBake_CurveData__Boxed* box(app::UberShaderCurveBake_CurveData value) {
            return il2cpp::box_value<app::UberShaderCurveBake_CurveData__Boxed>(get_class(), value);
        }
        inline app::UberShaderCurveBake_CurveData__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderCurveBake_CurveData__Array>(get_class(), size);
        }
        inline app::UberShaderCurveBake_CurveData__Array* create_array(const std::vector<app::UberShaderCurveBake_CurveData>& items) {
            return il2cpp::array_new<app::UberShaderCurveBake_CurveData__Array>(get_class(), items);
        }
    } // namespace UberShaderCurveBake_CurveData
} // namespace app::classes::types
