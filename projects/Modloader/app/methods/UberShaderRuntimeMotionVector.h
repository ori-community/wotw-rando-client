#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderRuntimeMotionVector.h>

namespace app::classes::UberShaderRuntimeMotionVector {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IStrippable_DoStrip, (app::UberShaderRuntimeMotionVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberShaderRuntimeMotionVector * this_ptr))
} // namespace app::classes::UberShaderRuntimeMotionVector
