#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_WaterCurrentZone_.h>
#include <Modloader/app/structs/WaterCurrentZone.h>

namespace app::classes::Moon::MoonReference_1_WaterCurrentZone_ {
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::WaterCurrentZone*, Resolve, app::MoonReference_1_WaterCurrentZone_* this_ptr, app::IMoonResolverContext* context)
}
