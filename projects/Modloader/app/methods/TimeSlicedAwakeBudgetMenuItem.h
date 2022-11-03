#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TimeSlicedAwakeBudgetMenuItem {
    IL2CPP_REGISTER_METHOD(0x010F1080, void, ctor, (app::TimeSlicedAwakeBudgetMenuItem * this_ptr, app::String* path, app::String* str))
    IL2CPP_REGISTER_METHOD(0x010F1160, void, OnSelectedFixedUpdate, (app::TimeSlicedAwakeBudgetMenuItem * this_ptr))
} // namespace app::classes::TimeSlicedAwakeBudgetMenuItem
