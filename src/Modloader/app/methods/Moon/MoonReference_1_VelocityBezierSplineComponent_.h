#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_VelocityBezierSplineComponent_.h>
#include <Modloader/app/structs/VelocityBezierSplineComponent.h>

namespace app::classes::Moon::MoonReference_1_VelocityBezierSplineComponent_ {
    IL2CPP_REGISTER_METHOD(
        0x02720AC0,
        app::VelocityBezierSplineComponent*,
        Resolve,
        app::MoonReference_1_VelocityBezierSplineComponent_* this_ptr,
        app::IMoonResolverContext* context
    )
}
