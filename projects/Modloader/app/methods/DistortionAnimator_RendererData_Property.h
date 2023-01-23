#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData_Property__Boxed.h>
#include <Modloader/app/structs/UberShaderProperty_Vector__Enum.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::DistortionAnimator_RendererData_Property {
    IL2CPP_REGISTER_METHOD(0x0011CE50, void, ctor, (app::DistortionAnimator_RendererData_Property__Boxed * this_ptr, app::UberShaderProperty_Vector__Enum property_enum, app::Vector4 value))
}
