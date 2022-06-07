#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::Demos::MotionAbsorb {
    IL2CPP_REGISTER_METHOD(0x02227A50, void, OnCollisionEnter, (app::MotionAbsorb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02227BB0, app::IEnumerator *, AbsorbMotion, (app::MotionAbsorb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02227D00, void, ctor, (app::MotionAbsorb * this_ptr))
}
