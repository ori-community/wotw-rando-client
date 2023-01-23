#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_AnimationTester_Group_.h>
#include <Modloader/app/structs/AnimationTester_Group.h>

namespace app::classes::System::Collections::Generic::List_1_AnimationTester_Group_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_AnimationTester_Group_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737470, List_1_AnimationTester_Group___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_AnimationTester_Group_ * this_ptr, app::AnimationTester_Group* item))
    IL2CPP_REGISTER_METHODINFO(0x04737750, List_1_AnimationTester_Group__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AnimationTester_Group*, get_Item, (app::List_1_AnimationTester_Group_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04760610, List_1_AnimationTester_Group__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_AnimationTester_Group_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727A08, List_1_AnimationTester_Group__get_Count__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_AnimationTester_Group_
