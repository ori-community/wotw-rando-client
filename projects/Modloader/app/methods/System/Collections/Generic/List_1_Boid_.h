#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_Boid_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Boid_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478F878, List_1_Boid__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Boid_ * this_ptr, app::Boid* item))
    IL2CPP_REGISTER_METHODINFO(0x04795C68, List_1_Boid__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Boid_ * this_ptr, app::Boid* item))
    IL2CPP_REGISTER_METHODINFO(0x04750CD8, List_1_Boid__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Boid*, get_Item, (app::List_1_Boid_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04756648, List_1_Boid__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Boid_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476E010, List_1_Boid__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Boid_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740998, List_1_Boid___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Boid_
