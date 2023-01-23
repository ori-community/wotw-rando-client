#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderCurveBake_CurveData__Array__Class.h>
#include <Modloader/app/structs/UberShaderCurveBake_CurveData__Array.h>

namespace app::classes::types {
    namespace UberShaderCurveBake_CurveData__Array {
        namespace {
            inline app::UberShaderCurveBake_CurveData__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderCurveBake_CurveData__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderCurveBake_CurveData__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCurveBake_CurveData__Array__Class>(type_info, "", "UberShaderCurveBake+CurveData[]");
        }
        inline app::UberShaderCurveBake_CurveData__Array* create() {
            return il2cpp::create_object<app::UberShaderCurveBake_CurveData__Array>(get_class());
        }
    } // namespace UberShaderCurveBake_CurveData__Array
} // namespace app::classes::types
