#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ColosseumTimer.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_ColosseumTimer_.h>

namespace app::classes::Moon::MoonReference_1_ColosseumTimer_ {
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ColosseumTimer*, Resolve, app::MoonReference_1_ColosseumTimer_* this_ptr, app::IMoonResolverContext* context)
}
