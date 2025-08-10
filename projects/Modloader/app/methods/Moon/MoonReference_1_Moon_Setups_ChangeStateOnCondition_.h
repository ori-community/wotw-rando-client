#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChangeStateOnCondition.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Setups_ChangeStateOnCondition_.h>

namespace app::classes::Moon::MoonReference_1_Moon_Setups_ChangeStateOnCondition_ {
    IL2CPP_REGISTER_METHOD(
        0x02720AC0,
        app::ChangeStateOnCondition*,
        Resolve,
        app::MoonReference_1_Moon_Setups_ChangeStateOnCondition_* this_ptr,
        app::IMoonResolverContext* context
    )
}
