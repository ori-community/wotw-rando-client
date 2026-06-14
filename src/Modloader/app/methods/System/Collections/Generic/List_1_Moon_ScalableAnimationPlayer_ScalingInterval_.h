#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_ScalableAnimationPlayer_ScalingInterval_.h>
#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_ScalingInterval_.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScalingInterval.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_ScalableAnimationPlayer_ScalingInterval_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_ScalableAnimationPlayer_ScalingInterval_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort,
        app::List_1_Moon_ScalableAnimationPlayer_ScalingInterval_* this_ptr,
        app::Comparison_1_Moon_ScalableAnimationPlayer_ScalingInterval_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::ScalableAnimationPlayer_ScalingInterval*,
        get_Item,
        app::List_1_Moon_ScalableAnimationPlayer_ScalingInterval_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_ScalableAnimationPlayer_ScalingInterval_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_Moon_ScalableAnimationPlayer_ScalingInterval_* this_ptr,
        app::ScalableAnimationPlayer_ScalingInterval* item
    )
} // namespace app::classes::System::Collections::Generic::List_1_Moon_ScalableAnimationPlayer_ScalingInterval_
