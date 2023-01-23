#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_Event.h>
#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_Event_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_ScalableAnimationPlayer_Event_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_ScalableAnimationPlayer_Event_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ScalableAnimationPlayer_Event*, get_Item, (app::List_1_Moon_ScalableAnimationPlayer_Event_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04776128, List_1_Moon_ScalableAnimationPlayer_Event__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_ScalableAnimationPlayer_Event_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715840, List_1_Moon_ScalableAnimationPlayer_Event__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_ScalableAnimationPlayer_Event_, GetEnumerator, (app::List_1_Moon_ScalableAnimationPlayer_Event_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047944E0, List_1_Moon_ScalableAnimationPlayer_Event__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_ScalableAnimationPlayer_Event_ * this_ptr, app::ScalableAnimationPlayer_Event* item))
    IL2CPP_REGISTER_METHODINFO(0x04738968, List_1_Moon_ScalableAnimationPlayer_Event__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Moon_ScalableAnimationPlayer_Event_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474BB78, List_1_Moon_ScalableAnimationPlayer_Event__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_ScalableAnimationPlayer_Event_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D3B8, List_1_Moon_ScalableAnimationPlayer_Event___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_ScalableAnimationPlayer_Event_
