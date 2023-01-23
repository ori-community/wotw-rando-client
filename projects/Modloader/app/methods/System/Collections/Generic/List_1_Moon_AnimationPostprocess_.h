#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_AnimationPostprocess_.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/AnimationPostprocess__Array.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_AnimationPostprocess_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_AnimationPostprocess_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04728538, List_1_Moon_AnimationPostprocess___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_AnimationPostprocess_ * this_ptr, app::AnimationPostprocess* item))
    IL2CPP_REGISTER_METHODINFO(0x0470F830, List_1_Moon_AnimationPostprocess__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::AnimationPostprocess__Array*, ToArray, (app::List_1_Moon_AnimationPostprocess_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727518, List_1_Moon_AnimationPostprocess__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AnimationPostprocess*, get_Item, (app::List_1_Moon_AnimationPostprocess_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0475B948, List_1_Moon_AnimationPostprocess__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_AnimationPostprocess_ * this_ptr, app::AnimationPostprocess* item))
    IL2CPP_REGISTER_METHODINFO(0x0474FB00, List_1_Moon_AnimationPostprocess__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_AnimationPostprocess_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047986E0, List_1_Moon_AnimationPostprocess__get_Count__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_AnimationPostprocess_
