#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BrainBehaviour.h>
#include <Modloader/app/structs/List_1_Moon_BrainBehaviour_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_BrainBehaviour_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::BrainBehaviour*, get_Item, (app::List_1_Moon_BrainBehaviour_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04744528, List_1_Moon_BrainBehaviour__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_BrainBehaviour_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B7E0, List_1_Moon_BrainBehaviour__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_Moon_BrainBehaviour_ * this_ptr, app::BrainBehaviour* item))
    IL2CPP_REGISTER_METHODINFO(0x04736F00, List_1_Moon_BrainBehaviour__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_BrainBehaviour_ * this_ptr, app::BrainBehaviour* item))
    IL2CPP_REGISTER_METHODINFO(0x04746DC8, List_1_Moon_BrainBehaviour__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_BrainBehaviour_ * this_ptr, app::BrainBehaviour* item))
    IL2CPP_REGISTER_METHODINFO(0x047059A8, List_1_Moon_BrainBehaviour__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_BrainBehaviour_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476ACC8, List_1_Moon_BrainBehaviour___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_BrainBehaviour_
