#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AllContainer_1_ICarryable_.h>
#include <Modloader/app/structs/ICarryable.h>

namespace app::classes::AllContainer_1_ICarryable_ {
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, (app::AllContainer_1_ICarryable_ * this_ptr, app::ICarryable* item))
    IL2CPP_REGISTER_METHODINFO(0x0476A018, AllContainer_1_ICarryable__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, (app::AllContainer_1_ICarryable_ * this_ptr, app::ICarryable* item))
    IL2CPP_REGISTER_METHODINFO(0x0471AAB0, AllContainer_1_ICarryable__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, (app::AllContainer_1_ICarryable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474BD18, AllContainer_1_ICarryable__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::AllContainer_1_ICarryable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743848, AllContainer_1_ICarryable___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7800, app::ICarryable*, get_Item, (app::AllContainer_1_ICarryable_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047556D8, AllContainer_1_ICarryable__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, (app::AllContainer_1_ICarryable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478ED28, AllContainer_1_ICarryable__get_Count__MethodInfo)
} // namespace app::classes::AllContainer_1_ICarryable_
