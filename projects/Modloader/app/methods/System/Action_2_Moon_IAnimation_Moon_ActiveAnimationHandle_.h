#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_ {
    IL2CPP_REGISTER_METHOD(0x01BFBCE0, void, Invoke, (app::Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_ * this_ptr, app::IAnimation* arg1, app::ActiveAnimationHandle arg2))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_ * this_ptr, app::Object* object, void* method_1))
} // namespace app::classes::System::Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_
