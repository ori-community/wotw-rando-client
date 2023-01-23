#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_PoisonousWaterZone_.h>
#include <Modloader/app/structs/PoisonousWaterZone.h>

namespace app::classes::System::Collections::Generic::List_1_PoisonousWaterZone_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_PoisonousWaterZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727FC0, List_1_PoisonousWaterZone___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::PoisonousWaterZone*, get_Item, (app::List_1_PoisonousWaterZone_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04773A38, List_1_PoisonousWaterZone__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_PoisonousWaterZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047169D0, List_1_PoisonousWaterZone__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_PoisonousWaterZone_ * this_ptr, app::PoisonousWaterZone* item))
    IL2CPP_REGISTER_METHODINFO(0x047147A0, List_1_PoisonousWaterZone__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_PoisonousWaterZone_ * this_ptr, app::PoisonousWaterZone* item))
    IL2CPP_REGISTER_METHODINFO(0x0470B5A0, List_1_PoisonousWaterZone__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_PoisonousWaterZone_
