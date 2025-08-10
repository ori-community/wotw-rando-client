#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Moon_FloatAnimationParameter_Single_.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_2_Moon_FloatAnimationParameter_Single_ {
    IL2CPP_REGISTER_METHOD(
        0x02C12050,
        void,
        Invoke,
        app::Action_2_Moon_FloatAnimationParameter_Single_* this_ptr,
        app::FloatAnimationParameter* arg1,
        float arg2
    )
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_2_Moon_FloatAnimationParameter_Single_* this_ptr, app::Object* object, void* method_1)
} // namespace app::classes::System::Action_2_Moon_FloatAnimationParameter_Single_
