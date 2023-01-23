#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderCurveBake_GradientData__Class.h>
#include <Modloader/app/structs/UberShaderCurveBake_GradientData.h>
#include <Modloader/app/structs/UberShaderCurveBake_GradientData__Boxed.h>
#include <Modloader/app/structs/UberShaderCurveBake_GradientData__Array.h>

namespace app::classes::types {
    namespace UberShaderCurveBake_GradientData {
        namespace {
            inline app::UberShaderCurveBake_GradientData__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderCurveBake_GradientData__Class** type_info = &type_info_ref;
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
        inline app::UberShaderCurveBake_GradientData__Array* create_array(const std::vector<app::UberShaderCurveBake_GradientData>& items) {
            return il2cpp::array_new<app::UberShaderCurveBake_GradientData__Array>(get_class(), items);
        }
    } // namespace UberShaderCurveBake_GradientData
} // namespace app::classes::types
