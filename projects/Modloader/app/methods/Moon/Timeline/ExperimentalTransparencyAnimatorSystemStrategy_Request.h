#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_Request__Boxed.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>

namespace app::classes::Moon::Timeline::ExperimentalTransparencyAnimatorSystemStrategy_Request {
    IL2CPP_REGISTER_METHOD(
        0x001154F0,
        void,
        ctor,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Boxed* this_ptr,
        app::UberShaderProperty_Color__Enum color,
        float value,
        bool persistant
    )
}
