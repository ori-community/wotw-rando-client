#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AllContainer_1_ICameraTarget_.h>
#include <Modloader/app/structs/ICameraTarget.h>

namespace app::classes::AllContainer_1_ICameraTarget_ {
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, (app::AllContainer_1_ICameraTarget_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D79F0, bool, Contains, (app::AllContainer_1_ICameraTarget_ * this_ptr, app::ICameraTarget* item))
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, (app::AllContainer_1_ICameraTarget_ * this_ptr, app::ICameraTarget* item))
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, (app::AllContainer_1_ICameraTarget_ * this_ptr, app::ICameraTarget* item))
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, (app::AllContainer_1_ICameraTarget_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D7800, app::ICameraTarget*, get_Item, (app::AllContainer_1_ICameraTarget_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::AllContainer_1_ICameraTarget_ * this_ptr))
} // namespace app::classes::AllContainer_1_ICameraTarget_
