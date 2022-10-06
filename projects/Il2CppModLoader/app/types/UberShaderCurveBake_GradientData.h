#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderCurveBake_GradientData {
        namespace {
            app::UberShaderCurveBake_GradientData__Class* type_info_ref = nullptr;
        }
        app::UberShaderCurveBake_GradientData__Class** type_info = &type_info_ref;
        inline app::UberShaderCurveBake_GradientData__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderCurveBake_GradientData__Class>(type_info, "", "UberShaderCurveBake", "GradientData");
        }
        inline app::UberShaderCurveBake_GradientData* create() {
            return il2cpp::create_object<app::UberShaderCurveBake_GradientData>(get_class());
        }
        inline app::UberShaderCurveBake_GradientData__Boxed* box(app::UberShaderCurveBake_GradientData value) {
            return il2cpp::box_value<app::UberShaderCurveBake_GradientData__Boxed>(get_class(), value);
        }
        inline app::UberShaderCurveBake_GradientData__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderCurveBake_GradientData__Array>(get_class(), size);
        }
        inline app::UberShaderCurveBake_GradientData__Array* create_array(const std::vector<app::UberShaderCurveBake_GradientData__Boxed>& items) {
            return il2cpp::array_new<app::UberShaderCurveBake_GradientData__Array>(get_class(), items);
        }
    } // namespace UberShaderCurveBake_GradientData
} // namespace app::classes::types
