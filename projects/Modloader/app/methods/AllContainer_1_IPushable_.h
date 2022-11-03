#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AllContainer_1_IPushable_ {
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, (app::AllContainer_1_IPushable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771048, AllContainer_1_IPushable__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, (app::AllContainer_1_IPushable_ * this_ptr, app::IPushable* item))
    IL2CPP_REGISTER_METHODINFO(0x04732D08, AllContainer_1_IPushable__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, (app::AllContainer_1_IPushable_ * this_ptr, app::IPushable* item))
    IL2CPP_REGISTER_METHODINFO(0x0476E2A8, AllContainer_1_IPushable__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::AllContainer_1_IPushable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D580, AllContainer_1_IPushable___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7800, app::IPushable*, get_Item, (app::AllContainer_1_IPushable_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04799F08, AllContainer_1_IPushable__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, (app::AllContainer_1_IPushable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474AEF8, AllContainer_1_IPushable__get_Count__MethodInfo)
} // namespace app::classes::AllContainer_1_IPushable_
