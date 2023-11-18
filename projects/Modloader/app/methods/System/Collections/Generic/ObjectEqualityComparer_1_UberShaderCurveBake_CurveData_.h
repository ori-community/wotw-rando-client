#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_UberShaderCurveBake_CurveData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberShaderCurveBake_CurveData.h>
#include <Modloader/app/structs/UberShaderCurveBake_CurveData__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UberShaderCurveBake_CurveData_ {
    IL2CPP_REGISTER_METHOD(0x01CD2D60, bool, Equals_1, (app::ObjectEqualityComparer_1_UberShaderCurveBake_CurveData_ * this_ptr, app::UberShaderCurveBake_CurveData x, app::UberShaderCurveBake_CurveData y))
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_UberShaderCurveBake_CurveData_ * this_ptr, app::UberShaderCurveBake_CurveData obj))
    IL2CPP_REGISTER_METHOD(0x01CD2E30, int32_t, IndexOf, (app::ObjectEqualityComparer_1_UberShaderCurveBake_CurveData_ * this_ptr, app::UberShaderCurveBake_CurveData__Array* array, app::UberShaderCurveBake_CurveData value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CD2FD0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_UberShaderCurveBake_CurveData_ * this_ptr, app::UberShaderCurveBake_CurveData__Array* array, app::UberShaderCurveBake_CurveData value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_UberShaderCurveBake_CurveData_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_UberShaderCurveBake_CurveData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_UberShaderCurveBake_CurveData_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UberShaderCurveBake_CurveData_
