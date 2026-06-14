#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_UberWaterControl_.h>
#include <Modloader/app/structs/UberWaterControl.h>

namespace app::classes::Moon::MoonReference_1_UberWaterControl_ {
    IL2CPP_REGISTER_METHOD(
        0x02720EB0,
        app::UberWaterControl*,
        SafeResolve,
        app::MoonReference_1_UberWaterControl_* this_ptr,
        app::IMoonResolverContext* context
    )
}
