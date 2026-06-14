#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule.h>
#include <Modloader/app/structs/TimeZoneInfo_c.h>

namespace app::classes::System::TimeZoneInfo___c {
    IL2CPP_REGISTER_METHOD(0x027B95F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TimeZoneInfo_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x027B9730,
        int32_t,
        _CreateLocalUnity_b__19_0,
        app::TimeZoneInfo_c* this_ptr,
        app::TimeZoneInfo_AdjustmentRule* rule1,
        app::TimeZoneInfo_AdjustmentRule* rule2
    )
} // namespace app::classes::System::TimeZoneInfo___c
