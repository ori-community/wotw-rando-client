#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_PreviewAnimation_.h>
#include <Modloader/app/structs/MoonAnimator_PreviewAnimation.h>
#include <Modloader/app/structs/Comparison_1_Moon_MoonAnimator_PreviewAnimation_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_MoonAnimator_PreviewAnimation_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_MoonAnimator_PreviewAnimation_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740180, List_1_Moon_MoonAnimator_PreviewAnimation__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_MoonAnimator_PreviewAnimation_ * this_ptr, app::MoonAnimator_PreviewAnimation* item))
    IL2CPP_REGISTER_METHODINFO(0x0471E388, List_1_Moon_MoonAnimator_PreviewAnimation__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_MoonAnimator_PreviewAnimation_ * this_ptr, app::MoonAnimator_PreviewAnimation* item))
    IL2CPP_REGISTER_METHODINFO(0x0470C3D0, List_1_Moon_MoonAnimator_PreviewAnimation__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_Moon_MoonAnimator_PreviewAnimation_ * this_ptr, app::Comparison_1_Moon_MoonAnimator_PreviewAnimation_* comparison))
    IL2CPP_REGISTER_METHODINFO(0x04706380, List_1_Moon_MoonAnimator_PreviewAnimation__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonAnimator_PreviewAnimation*, get_Item, (app::List_1_Moon_MoonAnimator_PreviewAnimation_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0478AC58, List_1_Moon_MoonAnimator_PreviewAnimation__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_MoonAnimator_PreviewAnimation_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740740, List_1_Moon_MoonAnimator_PreviewAnimation__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_MoonAnimator_PreviewAnimation_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047008B0, List_1_Moon_MoonAnimator_PreviewAnimation___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_MoonAnimator_PreviewAnimation_
