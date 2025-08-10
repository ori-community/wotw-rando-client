#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MotionAbsorbCharacter.h>

namespace app::classes::RootMotion::Demos::MotionAbsorbCharacter {
    IL2CPP_REGISTER_METHOD(0x02228220, void, Start, app::MotionAbsorbCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02228330, void, Update, app::MotionAbsorbCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02228480, void, SwingStart, app::MotionAbsorbCharacter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022288A0, void, ctor, app::MotionAbsorbCharacter* this_ptr)
} // namespace app::classes::RootMotion::Demos::MotionAbsorbCharacter
