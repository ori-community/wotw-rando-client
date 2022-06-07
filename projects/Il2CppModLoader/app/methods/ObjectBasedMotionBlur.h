#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ObjectBasedMotionBlur {
    IL2CPP_REGISTER_METHOD(0x0060D940, void, Start, (app::ObjectBasedMotionBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060DA20, void, FixedUpdate, (app::ObjectBasedMotionBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060DB10, void, GenerateBlurObjects, (app::ObjectBasedMotionBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060E050, void, CleanupGeneratedObjects, (app::ObjectBasedMotionBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060E1F0, void, ctor, (app::ObjectBasedMotionBlur * this_ptr))
}
