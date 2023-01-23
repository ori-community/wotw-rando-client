#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_AnimationEntry_.h>
#include <Modloader/app/structs/AnimationEntry.h>

namespace app::classes::System::Collections::Generic::List_1_AnimationEntry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_AnimationEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478E378, List_1_AnimationEntry__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AnimationEntry*, get_Item, (app::List_1_AnimationEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04773470, List_1_AnimationEntry__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_AnimationEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0471C310, List_1_AnimationEntry__RemoveAt__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_AnimationEntry_
