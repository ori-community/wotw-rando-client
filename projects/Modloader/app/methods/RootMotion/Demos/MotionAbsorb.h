#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MotionAbsorb.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::RootMotion::Demos::MotionAbsorb {
    IL2CPP_REGISTER_METHOD(0x02227A50, void, OnCollisionEnter, (app::MotionAbsorb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02227BB0, app::IEnumerator*, AbsorbMotion, (app::MotionAbsorb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02227D00, void, ctor, (app::MotionAbsorb * this_ptr))
} // namespace app::classes::RootMotion::Demos::MotionAbsorb
